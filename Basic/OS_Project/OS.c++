/*  Reg No.: 12208984
    Name: Vaibhav Singh
    Roll No: 52
    Section: K22TA
    */

#include <stdio.h>
#include <stdlib.h>

// Define the Process struct

struct Process {
    int pid;            // Process ID
    int burst_time;     // Burst Time
    int waiting_time;   // Waiting Time
};

// Function to read a list of processes from a file

void readProcessesFromFile(struct Process *processes, int num_processes, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    for (int i = 0; i < num_processes; i++) {
        fscanf(file, "%d %d", &processes[i].pid, &processes[i].burst_time);
        processes[i].waiting_time = 0; // Initialize waiting time to 0
    }

    fclose(file);
}

// Function to implement the aging algorithm

void agingAlgorithm(struct Process *processes, int num_processes, int time_quantum) {
    int total_waiting_time = 0;
    int total_turnaround_time = 0;

    while (1) {
        int all_processes_completed = 1;

        for (int i = 0; i < num_processes; i++) {
            if (processes[i].burst_time > 0) {
                all_processes_completed = 0;
                if (processes[i].burst_time > time_quantum) {
                    processes[i].burst_time -= time_quantum;
                    processes[i].waiting_time += total_waiting_time;
                    total_waiting_time += time_quantum;
                } else {
                    total_waiting_time += processes[i].burst_time;
                    total_turnaround_time += processes[i].waiting_time + processes[i].burst_time;
                    processes[i].burst_time = 0;
                }
            }
        }

        if (all_processes_completed) {
            break;
        }
    }

}

// Function to print the simulation results and metrics

void printSimulationResults(struct Process *processes, int num_processes) {
    printf("Simulation Results:\n");
    printf("---------------------------------------------------------\n");
    printf("| Process | Burst Time | Waiting Time | Turnaround Time |\n");
    printf("---------------------------------------------------------\n");

    float total_waiting_time = 0;
    float total_turnaround_time = 0;

    for (int i = 0; i < num_processes; i++) {
        printf("|   %2d    |     %2d     |      %3d     |       %3d       |\n",
               processes[i].pid, processes[i].burst_time,
               processes[i].waiting_time, processes[i].waiting_time + processes[i].burst_time);

        total_waiting_time += processes[i].waiting_time;
        total_turnaround_time += processes[i].waiting_time + processes[i].burst_time;
    }

    printf("---------------------------------------------------------\n");

    float avg_waiting_time = total_waiting_time / num_processes;
    float avg_turnaround_time = total_turnaround_time / num_processes;

    printf("Average Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);
}

int main() {
    int num_processes = 5; //Number of processes
    struct Process processes[num_processes];

    // Read processes from a file
    readProcessesFromFile(processes, num_processes, "processes.txt");

    int time_quantum = 5; 

    // Implement the aging algorithm
    agingAlgorithm(processes, num_processes, time_quantum);

    // Print simulation results and metrics
    printSimulationResults(processes, num_processes);

    return 0;
}





