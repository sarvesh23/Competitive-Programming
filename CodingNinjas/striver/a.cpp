#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_TREE_NODES 256
// Structure to represent a node in the Huffman tree
struct Node {
    char data;
    unsigned frequency;
    struct Node* left;
    struct Node* right;
};

// Priority queue (min-heap) to hold Huffman tree nodes
struct PriorityQueue {
    unsigned size;
    unsigned capacity;
    struct Node** array;
};

struct Node* newNode(char data, unsigned frequency) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->frequency = frequency;
    node->left = node->right = NULL;
    return node;
}

struct PriorityQueue* createPriorityQueue(unsigned capacity) {
    struct PriorityQueue* pq = (struct PriorityQueue*)malloc(sizeof(struct PriorityQueue));
    pq->size = 0;
    pq->capacity = capacity;
    pq->array = (struct Node**)malloc(pq->capacity * sizeof(struct Node*));
    return pq;
}

void swapNodes(struct Node** a, struct Node** b) {
    struct Node* t = *a;
    *a = *b;
    *b = t;
}

void minHeapify(struct PriorityQueue* pq, int idx) {
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < pq->size && pq->array[left]->frequency < pq->array[smallest]->frequency)
        smallest = left;

    if (right < pq->size && pq->array[right]->frequency < pq->array[smallest]->frequency)
        smallest = right;

    if (smallest != idx) {
        swapNodes(&pq->array[idx], &pq->array[smallest]);
        minHeapify(pq, smallest);
    }
}

bool isSizeOne(struct PriorityQueue* pq) {
    return (pq->size == 1);
}

struct Node* extractMin(struct PriorityQueue* pq) {
    struct Node* temp = pq->array[0];
    pq->array[0] = pq->array[pq->size - 1];
    pq->size--;
    minHeapify(pq, 0);
    return temp;
}

void insertNode(struct PriorityQueue* pq, struct Node* node) {
    pq->size++;
    int i = pq->size - 1;
    while (i && node->frequency < pq->array[(i - 1) / 2]->frequency) {
        pq->array[i] = pq->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    pq->array[i] = node;
}

struct Node* buildHuffmanTree(char data[], unsigned frequency[], int size) {
    struct Node *left, *right, *top;
    struct PriorityQueue* pq = createPriorityQueue(size);

    for (int i = 0; i < size; ++i)
        insertNode(pq, newNode(data[i], frequency[i]));

    while (!isSizeOne(pq)) {
        left = extractMin(pq);
        right = extractMin(pq);

        top = newNode('$', left->frequency + right->frequency);
        top->left = left;
        top->right = right;

        insertNode(pq, top);
    }
    return extractMin(pq);
}

void printCodes(struct Node* root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }

    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }

    if (!root->left && !root->right) {
        printf("Character: %c, Code: ", root->data);
        for (int i = 0; i < top; i++)
            printf("%d", arr[i]);
        printf("\n");
    }
}

void huffmanCodes(char data[], unsigned frequency[], int size) {
    struct Node* root = buildHuffmanTree(data, frequency, size);
    int arr[MAX_TREE_NODES], top = 0;
    printf("Huffman Codes:\n");
    printCodes(root, arr, top);
}

int main() {
    char data[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    unsigned frequency[] = {5, 9, 12, 13, 16, 45};
    int size = sizeof(data) / sizeof(data[0]);

    huffmanCodes(data, frequency, size);

    return 0;
}

