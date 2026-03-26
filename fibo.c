//fibonacci series
#include<stdio.h>
int main()
{
    int a,b,c;
    int n,i;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
printf("Suhana Dala Magar, 46");
return 0;
}


