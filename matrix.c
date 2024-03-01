// print matrix
#include <stdio.h>
int main() {
  int a, b, i, j;

  printf("Enter no. of rows and colume : ");
  scanf("%d %d", &a, &b);
  int num[a][b];
  int sum[a][b];
  for (i = 0; i < a; i++) {
    for (j = 0; j < b; j++) {
      printf("enter the %d%d elements of first array : ", i, j);
      scanf("%d", &num[i][j]);
    }
  }
  int num1[a][b];
  for (i = 0; i < a; i++) {
    for (j = 0; j < b; j++) {
      printf("enter the %d%d elements ofsecond array : ", i, j);
      scanf("%d", &num1[i][j]);
    }
  }

  for (i = 0; i < a; i++) {
    for (j = 0; j < b; j++) {
      sum[i][j] = num[i][j] + num1[i][j];
      printf("%d\t", sum[i][j]);
    }
    printf("\n");
  }
  return 0;
}
