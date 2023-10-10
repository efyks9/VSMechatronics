#include <stdio.h>

int main ()
{
    char name[51];
    int age = 0;
    printf("What is your name?\n");
    scanf("%s", &name);
    printf("\nWhat is your age?\n");
    scanf("%d", &age);
    printf("\nHello %s\nYou are %d years old\n", name, age);
    return 0;
}