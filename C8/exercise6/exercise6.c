#include <stdio.h>

int main ()
{
    int i;
    printf ( "Type an integer\n" );
    scanf ( "%d",&i );
    
    switch ( i )
    {
        case 0: 
            printf("\nBlack");
            break;
        
        case 1: 
            printf("\nBrown");
            break;
        
        case 2: 
            printf("\nRed\n\n");
            break;
        
        case 3: 
            printf("\nOrange\n\n");
            break;
        
        case 4: 
            printf("\nYellow\n\n");
            break;
        
        case 5: 
            printf("\nGreen\n\n");
            break;
        
        case 6: 
            printf("\nBlue\n\n");
            break;
        
        case 7: 
            printf("\nViolet\n\n");
            break;
        
        case 8: 
            printf("\nGrey\n\n");
            break;
        
        case 9: 
        printf("\nWhite\n\n");
        break;
        
        default: 
            printf("Invalid input\n\n");     
               
    }
    return 0;
}