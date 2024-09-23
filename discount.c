#include<stdio.h>
int main()
{
    float sales,discount;
    printf("Enter the sales amount: ");
    scanf("%f",&sales);
  if( sales > 2000){    //2500
    discount = (sales* 10/100);
  }
  else if( sales >1000){
    discount = (sales* 5/100);
  }
  else{ 
    discount = 0;
  }

  printf(" the discount amount is %.2f",discount);

    return 0;
}