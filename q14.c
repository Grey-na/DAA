// WAP to perform job sequencing with deadline using greedy approach.
#include <stdio.h>
#include <stdlib.h>

struct Job {
    int id;
    int deadline;
    int profit;
};

// Comparison function for sorting by profit in descending order
int compare(const void *a, const void *b) {
    struct Job *job1 = (struct Job *)a;
    struct Job *job2 = (struct Job *)b;
    return job2->profit - job1->profit;
}

void jobSequencing(struct Job arr[], int n) {
    qsort(arr, n, sizeof(struct Job), compare);

    int result[n];      // To store the job sequence
    int slot[n];        // To mark free time slots
    for (int i = 0; i < n; i++)
        slot[i] = 0;    // 0 means free

    for (int i = 0; i < n; i++) {
        for (int j = (arr[i].deadline < n ? arr[i].deadline : n) - 1; j >= 0; j--) {
            if (!slot[j]) {
                slot[j] = 1;       // Mark slot as filled
                result[j] = arr[i].id;
                break;
            }
        }
    }

    printf("Job sequence: ");
    for (int i = 0; i < n; i++) {
        if (slot[i])
            printf("J%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of jobs: ");
    scanf("%d", &n);

    struct Job arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter deadline and profit of J%d job: ", i + 1);
        scanf("%d %d", &arr[i].deadline, &arr[i].profit);
        arr[i].id = i + 1;
    }

    jobSequencing(arr, n);

    return 0;
}