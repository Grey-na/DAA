//Insertion sort
#include<stdio.h>
int main()
{
    int a[100],n,j,k,temp;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    for(k=1;k<n;k++)
    {
        temp=a[k];
        j=k-1;
        while(j>=0 && temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("The sorted array is:\n");
    for(k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }
    printf("Suhana Dala Magar, 46");
    return 0;
}
