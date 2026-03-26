#include<stdio.h>
#define MAX 20
int main()
{
    int n,i,j;
    int profit[MAX], deadline[MAX];
    int job[MAX];
    int slot[MAX];
    printf("Enter the number of jobs:\n");
    scanf("%d",&n);
    printf("Enter profit of each job:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&profit[i]);
        job[i]=i+1;
    }
    printf("Enter deadline of each job:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&deadline[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(profit[i]<profit[j])
            {
                int temp=profit[i];
                profit[i]=profit[j];
                profit[j]=temp;
                temp=deadline[i];
                deadline[i]=deadline[j];
                deadline[j]=temp;
                temp=job[i];
                job[i]=job[j];
                job[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        slot[i]=-1;
    int count=0, totalProfit=0;
    for(i=0;i<n;i++)
    {
        for(j=deadline[i]-1;j>=0;j--)
        {
            if(slot[j]==-1)
            {
                slot[j]=job[i];
                totalProfit+=profit[i];
                count++;
                break;
            }
        }
    }
printf("Selected jobs:\n");
    for(i=0;i<n;i++)
    {
        if(slot[i]!=-1)
        {
            printf("Job %d\n",slot[i]);
        }
    }
    printf("Total profit: %d\n",totalProfit);
    printf("Suhana Dala Magar, 46");
    return 0;
    }
