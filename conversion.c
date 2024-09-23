#include<stdio.h>
int main()
{
	int centrigrade,ferhanheit;
	printf("enter the centrigate :");
	scanf("%d",&centrigrade);
	ferhanheit=(centrigrade*9/5)+32;//c/10=f-32/18
	printf("the required ferhenight is %d",ferhanheit);
 return 0;
 }