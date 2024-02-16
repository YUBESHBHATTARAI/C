#include<stdio.h>
int main()
{
 int n,count=0,i;
 printf("enter the number :");
 scanf("%d",&n);
 for(i=1;i<=n;i++);
 {
 	if(n%i==0)
 	{
 		count=count+1;
	 } 
	if(count=2)
	 {
	 printf("the given number is prime");
	 }
	else 
	 {
	 printf("the given number is composite");
	 }
}
return 0;
}
