#include <stdio.h>
#include <stdlib.h>

// Structure to represent a process
struct Process
{
    int id;
    int arrival_time;
    int burst_time;
    int priority;
    int remaining_time;
    int waiting_time;
    int turnaround_time;
};

// Function to perform FCFS scheduling
void fcfs(struct Process processes[], int n)
{
    // Sort processes by arrival time
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (processes[j].arrival_time > processes[j + 1].arrival_time)
            {
                struct Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }

    int current_time = 0;

    for (int i = 0; i < n; i++)
    {
        if (current_time < processes[i].arrival_time)
        {
            current_time = processes[i].arrival_time;
        }

        processes[i].waiting_time = current_time - processes[i].arrival_time;
        processes[i].turnaround_time = processes[i].waiting_time + processes[i].burst_time;
        current_time += processes[i].burst_time;
    }
}

// Function to perform Shortest Job First (SJF) scheduling (non-preemptive)
void sjf_non_preemptive(struct Process processes[], int n)
{
    // Sort processes by arrival time
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (processes[j].arrival_time > processes[j + 1].arrival_time)
            {
                struct Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }

    int current_time = 0;

    for (int i = 0; i < n; i++)
    {
        if (current_time < processes[i].arrival_time)
        {
            current_time = processes[i].arrival_time;
        }

        int shortest_job = i;
        for (int j = i; j < n; j++)
        {
            if (processes[j].arrival_time <= current_time && processes[j].burst_time < processes[shortest_job].burst_time)
            {
                shortest_job = j;
            }
        }

        struct Process temp = processes[i];
        processes[i] = processes[shortest_job];
        processes[shortest_job] = temp;

        processes[i].waiting_time = current_time - processes[i].arrival_time;
        processes[i].turnaround_time = processes[i].waiting_time + processes[i].burst_time;
        current_time += processes[i].burst_time;
    }
}

// Function to perform Shortest Job First (SJF) scheduling (preemptive)
void sjf_preemptive(struct Process processes[], int n)
{
    int completed = 0;
    int current_time = 0;

    while (completed < n)
    {
        int shortest_job = -1;
        int min_burst_time = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (processes[i].arrival_time <= current_time && processes[i].remaining_time < min_burst_time && processes[i].remaining_time > 0)
            {
                shortest_job = i;
                min_burst_time = processes[i].remaining_time;
            }
        }

        if (shortest_job == -1)
        {
            current_time++;
        }
        else
        {
            processes[shortest_job].remaining_time--;

            if (processes[shortest_job].remaining_time == 0)
            {
                completed++;
                int finish_time = current_time + 1;
                processes[shortest_job].waiting_time = finish_time - processes[shortest_job].arrival_time - processes[shortest_job].burst_time;
                processes[shortest_job].turnaround_time = finish_time - processes[shortest_job].arrival_time;
            }

            current_time++;
        }
    }
}

// Function to perform Priority scheduling
void priority(struct Process processes[], int n)
{
    int completed = 0;
    int current_time = 0;

    while (completed < n)
    {
        int highest_priority = -1;
        int min_priority = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (processes[i].arrival_time <= current_time && processes[i].priority < min_priority && processes[i].remaining_time > 0)
            {
                highest_priority = i;
                min_priority = processes[i].priority;
            }
        }

        if (highest_priority == -1)
        {
            current_time++;
        }
        else
        {
            processes[highest_priority].remaining_time--;

            if (processes[highest_priority].remaining_time == 0)
            {
                completed++;
                int finish_time = current_time + 1;
                processes[highest_priority].waiting_time = finish_time - processes[highest_priority].arrival_time - processes[highest_priority].burst_time;
                processes[highest_priority].turnaround_time = finish_time - processes[highest_priority].arrival_time;
            }

            current_time++;
        }
    }
}

// Function to perform Round Robin scheduling
void round_robin(struct Process processes[], int n, int time_slice)
{
    int remaining[n];
    for (int i = 0; i < n; i++)
    {
        remaining[i] = processes[i].burst_time;
    }

    int current_time = 0;
    int completed = 0;

    while (completed < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (remaining[i] > 0)
            {
                if (remaining[i] <= time_slice)
                {
                    current_time += remaining[i];
                    processes[i].waiting_time += current_time - processes[i].arrival_time - processes[i].burst_time;
                    remaining[i] = 0;
                    completed++;
                }
                else
                {
                    current_time += time_slice;
                    remaining[i] -= time_slice;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        processes[i].turnaround_time = processes[i].waiting_time + processes[i].burst_time;
    }
}

// Function to calculate and display average waiting time, response time, and turnaround time
void display_results(struct Process processes[], int n)
{
    float total_waiting_time = 0;
    float total_turnaround_time = 0;
    float total_response_time = 0;

    printf("\nProcess\t Arrival Time\t Burst Time\t Waiting Time\t Turnaround Time\t Response Time\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t %d\t\t %d\t\t %d\t\t %d\t\t %d\n", processes[i].id, processes[i].arrival_time,
               processes[i].burst_time, processes[i].waiting_time, processes[i].turnaround_time,
               processes[i].waiting_time); // Assuming response time is the same as waiting time

        total_waiting_time += processes[i].waiting_time;
        total_turnaround_time += processes[i].turnaround_time;
        total_response_time += processes[i].waiting_time; // Assuming response time is the same as waiting time
    }

    printf("\nAverage Waiting Time: %.2f\n", total_waiting_time / n);
    printf("Average Turnaround Time: %.2f\n", total_turnaround_time / n);
    printf("Average Response Time: %.2f\n", total_response_time / n);
}

int main()
{
    int n, choice, time_slice;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for Process %d:\n", i + 1);
        processes[i].id = i + 1;
        printf("Arrival Time: ");
        scanf("%d", &processes[i].arrival_time);
        printf("Burst Time: ");
        scanf("%d", &processes[i].burst_time);
        printf("Priority (for Priority Scheduling): ");
        scanf("%d", &processes[i].priority);
        processes[i].remaining_time = processes[i].burst_time;
        processes[i].waiting_time = 0;
        processes[i].turnaround_time = 0;
    }

    printf("Enter time slice for Round Robin scheduling: ");
    scanf("%d", &time_slice);

    do
    {
        printf("\nMenu:\n");
        printf("1. FCFS Scheduling\n");
        printf("2. Preemptive SJF Scheduling\n");
        printf("3. Non-Preemptive SJF Scheduling\n");
        printf("4. Priority Scheduling\n");
        printf("5. Round Robin Scheduling\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            fcfs(processes, n);
            display_results(processes, n);
            break;
        case 2:
            sjf_preemptive(processes, n);
            display_results(processes, n);
            break;
        case 3:
            sjf_non_preemptive(processes, n);
            display_results(processes, n);
            break;
        case 4:
            priority(processes, n);
            display_results(processes, n);
            break;
        case 5:
            round_robin(processes, n, time_slice);
            display_results(processes, n);
            break;
        case 6:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
