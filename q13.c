// WAP to perform fractional knapsack problem using greedy approach.
#include <stdio.h>
#include <stdlib.h>

struct Item {
    int weight;
    int value;
};

// Comparison function for sorting by value-to-weight ratio
int compare(const void *a, const void *b) {
    struct Item *item1 = (struct Item *)a;
    struct Item *item2 = (struct Item *)b;

    double r1 = (double)item1->value / item1->weight;
    double r2 = (double)item2->value / item2->weight;

    if (r1 < r2) return 1;
    else if (r1 > r2) return -1;
    else return 0;
}

double fractionalKnapsack(struct Item arr[], int n, int capacity) {
    qsort(arr, n, sizeof(struct Item), compare);

    double totalValue = 0.0;
    for (int i = 0; i < n; i++) {
        if (arr[i].weight <= capacity) {
            totalValue += arr[i].value;
            capacity -= arr[i].weight;
        } else {
            totalValue += arr[i].value * ((double)capacity / arr[i].weight);
            break;
        }
    }
    return totalValue;
}

int main() {
    int n, capacity;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    struct Item arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter weight and value of item %d: ", i + 1);
        scanf("%d %d", &arr[i].weight, &arr[i].value);
    }

    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);

    double maxValue = fractionalKnapsack(arr, n, capacity);
    printf("Maximum value that can be obtained: %.2lf\n", maxValue);
    printf("Suhana Dala Magar, 46");
    return 0;
}