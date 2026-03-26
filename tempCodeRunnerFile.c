//binary search using divide and conquer
#include<stdio.h>
#include<conio.h>
#include<math.h>
void binarysearch(int a[10],int low,int high,int key)
{
    int mid;
    mid=floor((low+high)/2);
    if(key==a[mid])
    {
        printf("Searching Successful at position: %d",mid);
    }
    else if(key<a[mid])
    {
        binarysearch(a,low,mid-1,key);
    }
    else
    {
        binarysearch(a,mid+1,high,key);
    }
}
int main()
{
    int a[10],n,i,key;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element:\n");
    scanf("%d",&key);
    binarysearch(a,0,n-1,key);
    printf("Suhana Dala Magar, 46");
    return 0;
}