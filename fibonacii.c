#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
printf("enter the value:\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    c=a+b;
    a=b;
    b=c;
}
printf("the fibonacci series is %d",c);
return 0;
}