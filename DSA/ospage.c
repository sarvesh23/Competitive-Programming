#include <stdio.h>

#define MAX_FRAMES 10

// Function to implement the FIFO (First-In, First-Out) page replacement algorithm

// Function to implement the FIFO (First-In, First-Out) page replacement algorithm

int FIFO(int pages[], int n, int frames)

{

    int frame[frames];

    int pageFaults = 0;

    int index = 0;

    for (int i = 0; i < frames; i++)

    {

        frame[i] = -1;
    }

    for (int i = 0; i < n; i++)

    {

        int page = pages[i];

        int found = 0;

        for (int j = 0; j < frames; j++)

        {

            if (frame[j] == page)

            {

                found = 1;

                break;
            }
        }

        if (found == 0)

        {

            frame[index] = page;

            pageFaults++;

            index = (index + 1) % frames;
        }
    }

    return pageFaults;
}

// Function to implement the LRU (Least Recently Used) page replacement algorithm

int LRU(int pages[], int n, int frames)

{

    int frame[frames];

    int pageFaults = 0;

    for (int i = 0; i < frames; i++)

    {

        frame[i] = -1;
    }

    for (int i = 0; i < n; i++)

    {

        int page = pages[i];

        int found = 0;

        for (int j = 0; j < frames; j++)

        {

            if (frame[j] == page)

            {

                found = 1;

                break;
            }
        }

        if (found == 0)

        {

            int lruIndex = -1;

            int lruTime = -1;

            for (int j = 0; j < frames; j++)

            {

                int k = i - 1;

                while (k >= 0 && frame[j] != pages[k])

                {

                    k--;
                }

                if (k < lruTime || lruTime == -1)

                {

                    lruTime = k;

                    lruIndex = j;
                }
            }

            frame[lruIndex] = page;

            pageFaults++;
        }
    }

    return pageFaults;
}

// Function to implement the Optimal page replacement algorithm

int Optimal(int pages[], int n, int frames)

{

    int frame[frames];

    int pageFaults = 0;

    int nextUseIndex[frames];

    for (int i = 0; i < frames; i++)

    {

        frame[i] = -1;

        nextUseIndex[i] = n;
    }

    for (int i = 0; i < n; i++)

    {

        int page = pages[i];

        int found = 0;

        for (int j = 0; j < frames; j++)

        {

            if (frame[j] == page)

            {

                found = 1;

                break;
            }
        }

        if (found == 0)

        {

            int pageToReplace = -1;

            int farthestUseIndex = -1;

            for (int j = 0; j < frames; j++)

            {

                int k = i + 1;

                while (k < n && pages[k] != frame[j])

                {

                    k++;
                }

                if (k > farthestUseIndex)

                {

                    farthestUseIndex = k;

                    pageToReplace = j;
                }
            }

            frame[pageToReplace] = page;

            nextUseIndex[pageToReplace] = farthestUseIndex;

            pageFaults++;
        }
    }

    return pageFaults;
}

int main()

{

    int choice, n = 12;

    int pages[12] = {1, 2, 3, 4, 2, 1, 5, 6, 2, 1, 2, 3};

    do

    {

        printf("\nPage Replacement Algorithms:\n");

        printf("1. FIFO\n");

        printf("2. LRU\n");

        printf("3. Optimal\n");

        printf("4. Exit\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)

        {

        case 1:

            printf("Page Faults (FIFO) 3 frames: %d\n", FIFO(pages, n, 3));

            printf("Page Faults (FIFO) 4 frames: %d\n", FIFO(pages, n, 4));

            break;

        case 2:

            printf("Page Faults (LRU) 3 frames: %d\n", LRU(pages, n, 3));

            printf("Page Faults (LRU) 4 frames: %d\n", LRU(pages, n, 4));

            break;

        case 3:

            printf("Page Faults (Optimal) 3 frames: %d\n", Optimal(pages, n, 3));

            printf("Page Faults (Optimal) 4 frames: %d\n", Optimal(pages, n, 4));

            break;

        case 4:

            printf("Exiting...\n");

            break;

        default:

            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
