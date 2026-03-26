//GCD
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,r;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
printf("The gcd is %d\n",a);
printf("Suhana Dala Magar, 46");
getch();
}