//sequential search using iterative method
#include<stdio.h>
int main()
{
    int a[5],n,i,key;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element:\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Searching Successful\n");
            break;
        }
    }
    if(i==n)
        printf("Searching Unsuccessful\n");
    printf("Suhana Dala Magar, 46");
    return 0;
}