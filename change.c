#include<stdio.h>
int main()
{
    int meter,km;
    printf("enter the meters:\n");
    scanf("%d",&meter);
    km=(0.001)*meter;//1 km=1000 m
    printf("the required km is %d",km);
return 0;
}