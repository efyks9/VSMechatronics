#include <stdio.h>

int main ()
{
    int a;
    
    printf("Type an integer\n");
    scanf("%d", &a);

    if (a < 11)
        printf("\nThe number is in range\n\n");
    else
        printf("\nThe number is not in range\n\n");
    return 0;
}