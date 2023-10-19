#include <stdio.h>

int main ()
{
    // define variables
    char name[51];
    int x = 0;
    
    // ask for name
    printf("Please type your name: ");
    scanf("%s", &name);
    
    // run forever
    while ( x == 0 )
        printf("\n%s\n", name);
    
    
    return 0;
}