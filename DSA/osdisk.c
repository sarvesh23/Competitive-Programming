#include <stdio.h>
#include <stdlib.h>
int fcfs(int arr[], int n, int start)
{
    int dis = abs(start - arr[0]);
    for (int i = 1; i < n; i++)
    {
        dis += abs(arr[i] - arr[i - 1]);
    }
    return dis;
}
int findNearestRequest(int requests[], int n, int currentPos, int visited[])
{
    int shortestSeek = 1000000; // A large number to initialize the shortest seek
    int nearestIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            int seek = abs(requests[i] - currentPos);
            if (seek < shortestSeek)
            {
                shortestSeek = seek;
                nearestIndex = i;
            }
        }
    }

    return nearestIndex;
}

// Function to simulate the SSTF disk scheduling algorithm
int SSTF(int requests[], int n, int initialPos)
{
    int seekSequence[n];
    int visited[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    int currentPos = initialPos;
    int totalSeek = 0;

    for (int i = 0; i < n; i++)
    {
        int nearestIndex = findNearestRequest(requests, n, currentPos, visited);
        if (nearestIndex == -1)
        {
            break;
        }

        seekSequence[i] = requests[nearestIndex];
        visited[nearestIndex] = 1;
        totalSeek += abs(currentPos - requests[nearestIndex]);
        currentPos = requests[nearestIndex];
    }
    /*
    printf("Seek Sequence: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", seekSequence[i]);
    }*/

    return totalSeek;
}
int scan(int arr[], int n, int start)
{
    printf("\nEnter the direction of scan 1. Left to right 2. Right to left ");
    int dir;
    scanf("%d", &dir);
    int dis, right;
    printf("\nEnter the disk right boundary ");
    scanf("%d", &right);
    if (dir == 1)
    {
        dis = abs(right - start);
        printf("\ndis %d", dis);
        int s = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (s > arr[i])
                s = arr[i];
        }
        dis = dis + abs(right - s);
        // printf("\ns %d",s);
        // printf("\ndis %d",dis);
    }
    else
    {
        dis = abs(start - 0);
        int l = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (l < arr[i])
                l = arr[i];
        }
        dis = dis + l;
    }
    return dis;
}
int cscan(int arr[], int n, int start)
{
    printf("\nEnter the direction of scan 1. Left to right 2. Right to left ");
    int dir;
    scanf("%d", &dir);
    int dis, right;
    printf("\nEnter the disk right boundary ");
    scanf("%d", &right);
    if (dir == 1)
    {
        dis = abs(right - start);
        printf("\ndis %d", dis);
        int l = 0;
        for (int i = 0; i < n; i++)
        {
            if (l < arr[i] && arr[i] <= start)
            {
                printf("\nl %d", l);
                l = arr[i];
            }
        }
        dis = dis + right + l;
        // printf("\nl %d",l);
        // printf("\ndis %d",dis);
    }
    else
    {
        dis = abs(start - 0);
        dis += right;
    }
    return dis;
}
int main()
{
    int arr[100], n = 1, start, count, ans;
    printf("\nDisk Scheduling 1.FCFS 2.SSTF 3.SCAN 4.C-SCAN ");
    while (n <= 4)
    {
        printf("Enter Choice :");
        scanf("%d", &n);
        printf("Enter Starting Point ");
        scanf("%d", &start);
        printf("Enter Sequence count ");
        scanf("%d", &count);
        printf("Enter Sequence ");
        for (int i = 0; i < count; i++)
        {
            scanf("%d", &arr[i]);
        }
        if (n == 1)
        {
            ans = fcfs(arr, count, start);
            printf("\nFCFS Displacement %d", ans);
        }
        else if (n == 2)
        {
            ans = SSTF(arr, count, start);
            printf("\nSSTF Displacement %d", ans);
        }
        else if (n == 3)
        {
            ans = scan(arr, count, start);
            printf("\nSCAN Displacement %d", ans);
        }
        else if (n == 4)
        {
            ans = cscan(arr, count, start);
            printf("\nCSCAN Displacement %d", ans);
        }
        else
        {
            printf("\nEXITING....");
            exit(0);
        }
    }
    return 0;
}
