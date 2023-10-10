#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int  a, b;

    // Note: Order of a,b indicates the order in which operations are carried out on execution
    
    // Increment operators
    printf("a = %d, b = %d\n", a, b);
    b = 3;
    printf("a = %d, b = %d\n", a, b);
    a = ++b;    // b is now 4, a is also 4
    printf("a = %d, b = %d\n", a, b);
    a = b++;    // a is 4, b is now 5, 
    printf("a = %d, b = %d\n", a, b);
    
    // Decrement operators (reset a back to 3)
    b = 3;
    printf("a = %d, b = %d\n", a, b);
    a = b--;    // a is 3, b is now 2
    printf("a = %d, b = %d\n", a, b);    
    a = --b;    // b is now 1, a is also 1
    printf("a = %d, b = %d\n", a, b);
    
    return 0;	// Exit from main
}