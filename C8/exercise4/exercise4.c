#include <stdio.h>

int main ()
{
    int age;
    printf ( "Type your age\n" );
    scanf ( "%d",&age );
    if ( age <= 5 )
        printf ( "\nStill a baby\n\n" );
    else if ( (age > 5) && (age <= 12) )
        printf ( "\nThe junior years\n\n" );
    else if ( (age > 12) && (age < 20) )
        printf ( "\nTeenage years\n\n" );
    else if ( age >= 20 )
        printf ( "\nDownhill all the way down\n\n" ); 
    return 0;
}