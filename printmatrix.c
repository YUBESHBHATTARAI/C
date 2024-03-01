#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the rows and columns:\n");
	scanf("%d %d",&a,&b);
	int num[a][b];
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
		printf("enter the %d %d elements of row and column:",i,j);
		scanf("%d",&num[i][j]);	
		}
}
	printf(" the required matrix is\n");
for(i=0;i<a;i++){
	for(j=0;j<b;j++){

		printf("%d\t",num[i][j]);
	}
	printf("\n");
}	
	return 0;
}