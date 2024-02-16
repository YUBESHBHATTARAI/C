//swapping without any variable
#include<stdio.h>
int main()
{
int a,b;
printf("enter the values:\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the the swapped valuee is %d and %d",a,b);
return 0;
}