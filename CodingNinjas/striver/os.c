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
}

// Function to perform Shortest Job First (SJF) scheduling (non-preemptive)
void sjf_non_preemptive(struct Process processes[], int n)
{
}

// Function to perform Shortest Job First (SJF) scheduling (preemptive)
void sjf_preemptive(struct Process processes[], int n)
{
}

// Function to perform Priority scheduling
void priority(struct Process processes[], int n)
{
}

// Function to perform Round Robin scheduling
void round_robin(struct Process processes[], int n, int time_slice)
{
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
