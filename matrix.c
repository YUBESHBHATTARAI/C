// print matrix
#include<stdio.h>
{
    int a,b,i,j;
    printf("enter the numbers\n");
    scanf("%d %d",&a,&b);
    int num[a][b];
    printf("enter the %d%delements of array",i,j);
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",num[i][j]);
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("the required array %d",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}