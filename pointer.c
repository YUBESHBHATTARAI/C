#include <stdio.h>

int main() {
    int num = 10;  // Declare an integer
    int *pNum;     // Declare a pointer to an integer

    pNum = &num;   // Assign the address of num to the pointer

    printf("Value of num: %d\n", num);  // Print the value of num
    printf("Address of num: %p\n", &num);  // Print the address of num
    printf("Value of pNum: %p\n", pNum);  // Print the value of pNum (which should be the address of num)
    printf("Value pointed by pNum: %d\n", *pNum);  // Print the value pointed by pNum (which should be the value of num)

    return 0;
}