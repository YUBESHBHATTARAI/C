#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values:\n");
    scanf("%d%d",&a,&b);
    temp=a;//swaping with the third variable
    a=b;
    b=a;
printf("the values are %d and %d",a,b);
return 0;
}