#include<stdio.h>
#define MAX 20
int main()
{
    int n,e;
    int u[MAX],v[MAX];
    int visited[MAX]={0};
    int i,j;
    printf("Enter the number of vertices:\n");
    scanf("%d",&n);
    printf("Enter the number of edges:\n");
    scanf("%d",&e);
    printf("Enter the edges(u v):\n");
    for(i=0;i<e;i++)
    {
        scanf("%d%d",&u[i],&v[i]);
    
    }
    //Approximation algorithm
    for(i=0;i<e;i++)
    {
        if(visited[u[i]]==0 && visited[v[i]]==0)
        {
            visited[u[i]]=1;
            visited[v[i]]=1;
        }
    }
    printf("Vertex cover:\n");
    for(i=0;i<n;i++)
    {
        if(visited[i]==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
    