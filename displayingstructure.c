//C Program to Store Information of a Student and display it Using Structure
#include <stdio.h>
struct student
{
char name[50];
int roll;
float marks;
};
int main()
{
struct student s;
printf("Enter information:\n");
puts("Enter name: ");
gets(s.name);
printf("Enter roll number: ");
scanf("%d", &s.roll);
printf("Enter marks: ");
scanf("%f", &s.marks);
printf("Displaying Information:\n");
printf("Name: ");
puts(s.name);
printf("Roll number: %d\n", s.roll);
printf("Marks: %.1f\n", s.marks);
return 0;
}