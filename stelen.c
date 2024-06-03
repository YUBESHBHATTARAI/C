//example of strlen() function
#include <stdio.h>
#include <string.h>
int main()
{
char str1[20],length;
puts("Enter a string that you want to find the length\n");
gets(str1);
length=strlen(str1)
printf("Length of string str1: %d", length);
return 0;
}