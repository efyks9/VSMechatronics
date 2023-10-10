#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int r, h;
    float SA, pi = 3.14159f;
    
    printf ( "\nType a value for radius\n" );
    scanf ( "%d",&r );
    
    printf ( "\nType a value for height\n" );
    scanf ( "%d",&h );

    /* Error handling, if there is not an integer value typed for r or h.
       When the value typed in is not an integer it is stored as zero in
       in which case the error handling code runs. This also solves the issue
       of the user not typing in anything and just pressing enter, and if the
       user types 0 that is an  invalid input because a cylinder needs to have 
       a radius and height */ 
    if ( r == 0 )
    {
        printf( "\nType a value for radius\n" );
        scanf( "%d", &r );
    }
    else if ( h == 0 )
    {
        printf( "\nType a value for height\n" );
        scanf( "%d", &h );
    }

    SA = ( 2 * pi * (float) r * (float) r ) + ( 2 * pi * (float) r * (float) h );
    
    printf ( "\nSurface Area = %.3f\n\n", SA ); 
    
    return 0;
}