#include<stdio.h>

void binarysearch(int a[100], int low, int high, int key)
{
    if(low > high)
    {
        printf("Key not found.\n");
        return;
    }

    int mid = (low + high) / 2;

    if(key == a[mid])
    {
        printf("Searching Successful at position: %d\n", mid); // 0-indexed
        return;
    }
    else if(key < a[mid])
    {
        binarysearch(a, low, mid - 1, key);
    }
    else
    {
        binarysearch(a, mid + 1, high, key);
    }
}

int main()
{
    int a[10], n, i, key;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    printf("Enter the array elements (sorted!):\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the key element:\n");
    scanf("%d", &key);

    binarysearch(a, 0, n - 1, key);

    printf("Suhana Dala Magar, 46\n");
    return 0;
}