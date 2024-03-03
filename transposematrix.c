#include<stdio.h>

int main()

{

int m,n;

printf("Enter the row and column size of orginal matrix\n");

scanf("%d%d",&m,&n);

int original[m][n],transpose[n][m],i,j;

printf("Enter the elements of orginal matrix\n");

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

{

scanf("%d",&original[i][j]);

}

}

printf("The orginal matrix is\n");

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

{

printf("%d\t",original[i][j]);

}

printf("\n");

}
for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

{

transpose[j][i]=original[i][j];

}

}

printf("The transpose matrix is:\n");

for(i=0;i<n;i++)

{

for(j=0;j<m;j++)

{

printf("%d\t",transpose[i][j]);

}

printf("\n");

}

return 0;

}