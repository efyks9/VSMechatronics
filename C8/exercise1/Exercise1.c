#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int  a, b;
	printf("Type a value for a\n");
	scanf("%d", &a);
	printf("Type a value for b\n");
	scanf("%d", b);

	// A single line of code conditional on the value of a
	if ( a == 7 )
	   printf ("The value of a is 7 - so I will do this\n");    
	   
	// Multiple lines of code conditional on b not equalling 4
	// so then need to be placed inside { and }
	if ( b != 4 )
	{
	   printf ("The value of b is not 4\n");    
	   printf ("So I will do multiple tasks\n");    
	}
	   
    return 0;   // Exit from main
}