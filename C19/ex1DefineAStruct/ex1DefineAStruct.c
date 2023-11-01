#include <stdio.h>
#include <stdlib.h>

// Define a struct for age, name, and surname
struct NameAge
{
    int age;
    char forename[30];
    char surname[50]; 
};

int main (void)
{
    // Create a new struct
    struct NameAge NameAge;
    
    // Ask for name
    printf("Type your first name: ");
    scanf("%s", NameAge.forename);

    // Ask for surname
    printf("Type your last name: ");
    scanf("%s", NameAge.surname);
    
    // Ask for age
    printf("Type your age: ");
    scanf("%d", &NameAge.age);

    // Display the inputs
    printf("Your first name is %s", NameAge.forename);
    printf("\nYour last name is %s", NameAge.surname);
    printf("\nYour age is %d\n", NameAge.age);

    return 0;
}