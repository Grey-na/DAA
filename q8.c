#include <stdio.h>

int min, max;

void maxMin(int a[], int low, int high)
{
    int mid;
    if(low == high) // only one element
    {
        if(a[low] < min) min = a[low];
        if(a[low] > max) max = a[low];
        return;
    }
    if(low == high - 1) // two elements
    {
        if(a[low] < a[high])
        {
            if(a[low] < min) min = a[low];
            if(a[high] > max) max = a[high];
        }
        else
        {
            if(a[high] < min) min = a[high];
            if(a[low] > max) max = a[low];
        }
        return;
    }
    mid = (low + high) / 2;
    maxMin(a, low, mid);
    maxMin(a, mid + 1, high);
}

int main()
{
    int n, i;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];
    min = a[0];
    maxMin(a, 0, n - 1);

    printf("The maximum element is %d\n", max);
    printf("The minimum element is %d\n", min);
    printf("Suhana Dala Magar, 46\n");

    return 0;
}