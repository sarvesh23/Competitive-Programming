#include <iostream>
#include<stdio.h>
using namespace std;
// Structure for a singly linked list node
struct Node
{
int data;
Node *next;
};
Node *head = NULL;
void insert(int val)
{
    Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next=head->next;
    head=newNode;
    
}