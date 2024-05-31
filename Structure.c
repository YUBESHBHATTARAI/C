#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare a variable of type Person
    struct Person person;

    // Read input from the user
    printf("Enter name: ");
    scanf("%s", person.name);

    printf("Enter age: ");
    scanf("%d", &person.age);

    // Display the entered information
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);

    return 0;
}