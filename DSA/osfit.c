#include <stdio.h>
void firstFit(int memPartitions[], int numPartitions, int processes[], int numProcesses)
{
    int allocation[numProcesses];
    for (int i = 0; i < numProcesses; i++)
    {
        allocation[i] = -1;
        for (int j = 0; j < numPartitions; j++)
        {
            if (memPartitions[j] >= processes[i])
            {
                allocation[i] = j;
                memPartitions[j] -= processes[i];
                break;
            }
        }
    }
    printf("First Fit Allocation:\n");
    for (int i = 0; i < numProcesses; i++)
    {
        if (allocation[i] != -1)
        {
            printf("Process %d of size %d KB is allocated to Partition %d\n", i + 1, processes[i], allocation[i] + 1);
        }
        else
        {
            printf("Process %d of size %d KB cannot be allocated\n", i + 1, processes[i]);
        }
    }
}
void bestFit(int memPartitions[], int numPartitions, int processes[], int numProcesses)
{

    int allocation[numProcesses];
    for (int i = 0; i < numProcesses; i++)
    {
        allocation[i] = -1;
        int bestFitIdx = -1;
        for (int j = 0; j < numPartitions; j++)
        {
            if (memPartitions[j] >= processes[i])
            {
                if (bestFitIdx == -1 || memPartitions[j] < memPartitions[bestFitIdx])
                {
                    bestFitIdx = j;
                }
            }
        }
        if (bestFitIdx != -1)
        {
            allocation[i] = bestFitIdx;
            memPartitions[bestFitIdx] -= processes[i];
        }
    }
    printf("Best Fit Allocation:\n");
    for (int i = 0; i < numProcesses; i++)
    {
        if (allocation[i] != -1)
        {
            printf("Process %d of size %d KB is allocated to Partition %d\n", i + 1, processes[i], allocation[i] + 1);
        }
        else
        {
            printf("Process %d of size %d KB cannot be allocated\n", i + 1, processes[i]);
        }
    }
}
void worstFit(int memPartitions[], int numPartitions, int processes[], int numProcesses)
{
    int allocation[numProcesses];
    for (int i = 0; i < numProcesses; i++)
    {
        allocation[i] = -1;
        int worstFitIdx = -1;
        for (int j = 0; j < numPartitions; j++)
        {
            if (memPartitions[j] >= processes[i])
            {
                if (worstFitIdx == -1 || memPartitions[j] > memPartitions[worstFitIdx])
                {
                    worstFitIdx = j;
                }
            }
        }
        if (worstFitIdx != -1)
        {
            allocation[i] = worstFitIdx;
            memPartitions[worstFitIdx] -= processes[i];
        }
    }
    printf("Worst Fit Allocation:\n");
    for (int i = 0; i < numProcesses; i++)
    {
        if (allocation[i] != -1)
        {
            printf("Process %d of size %d KB is allocated to Partition %d\n", i + 1, processes[i], allocation[i] + 1);
        }
        else
        {
            printf("Process %d of size %d KB cannot be allocated\n", i + 1, processes[i]);
        }
    }
}
int main()
{
    {
        int memPartitions[] = {100, 500, 200, 300, 600};
        int processes[] = {212, 417, 112, 426};
        int numPartitions = sizeof(memPartitions) / sizeof(memPartitions[0]);
        int numProcesses = sizeof(processes) / sizeof(processes[0]);

        firstFit(memPartitions, numPartitions, processes, numProcesses);
    }
    {
        int memPartitions[] = {100, 500, 200, 300, 600};
        int processes[] = {212, 417, 112, 426};
        int numPartitions = sizeof(memPartitions) / sizeof(memPartitions[0]);
        int numProcesses = sizeof(processes) / sizeof(processes[0]);
        bestFit(memPartitions, numPartitions, processes, numProcesses);
    }
    {
        int memPartitions[] = {100, 500, 200, 300, 600};
        int processes[] = {212, 417, 112, 426};
        int numPartitions = sizeof(memPartitions) / sizeof(memPartitions[0]);
        int numProcesses = sizeof(processes) / sizeof(processes[0]);
        worstFit(memPartitions, numPartitions, processes, numProcesses);
    }

    return 0;
}