//C PROGRAM THAT ASKS A NUMBER N FROM USER AND THEN DISPLAY ONLY EVEN NUMBER FROM 2 TO N USING CONTINUE STATEMENT
#include<stdio.h>
int main()
{
int n,i;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i%2!=0)
{  continue;
}
printf("%d\t",i);
}
	return 0;
}