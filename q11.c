//Randomized Quick sort
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Partition function with randomized pivot (Hoare scheme)
int partition(int arr[], int low, int high)
{
    // Random pivot: swap a random element with arr[low]
    int pivotIndex = low + rand() % (high - low + 1);
    int temp = arr[low];
    arr[low] = arr[pivotIndex];
    arr[pivotIndex] = temp;

    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while(i <= j)
    {
        while(i <= high && arr[i] <= pivot)
            i++;
        while(j >= low && arr[j] > pivot)
            j--;

        if(i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap pivot with arr[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

// Randomized Quick Sort function
void randomizedQuickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);
        randomizedQuickSort(arr, low, pi - 1);
        randomizedQuickSort(arr, pi + 1, high);
    }
}

// Print function
void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function
int main()
{
    srand(time(0)); // Seed random number generator

    int arr[100], n;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Original array:\t");
    printArray(arr, n);

    randomizedQuickSort(arr, 0, n - 1);

    printf("Sorted array:\t");
    printArray(arr, n);

    printf("Sheeya Maharjan, 42\n");

    return 0;
}