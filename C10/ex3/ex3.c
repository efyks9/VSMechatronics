#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <math.h>

float convertToRadians (int degrees)
{
    float radians = M_PI * (float) degrees / 180.0f;
    
    return radians;
}

// counts up from 'first' to 'last' number on a single line.

int main ()
{
    // define constants
    int i, firstNr, lastNr, temp;

    // ask user to input two numbers
    printf("Number counter v1.0\nThis programme will count up from 'first' to 'last' number.\n");
    printf("\nType the first number: ");
    scanf("%d", &firstNr);
    printf("Type the last number: ");
    scanf("%d", &lastNr);

    // error checking if the numbers are in the wrong order
    if ( lastNr < firstNr )
    {
        // let the user know what they did wrong
        printf("\nError #501\nYou typed the numbers in the wrong order");        
        
        // delay function to print out progress dots
        for ( i = 0 ; i < 3; i++)
        {
            printf(".");
            Sleep(800);
        }

        // tell the user what will happen
        printf("\nRe-ordering numbers");
        
        // delay function printing dummy progress dots to give user time to read the error code
        for ( i = 0 ; i < 3; i++)
        {
            printf(".");
            Sleep(800);
        }

        // add a spacing for readability
        printf("\n\n");

        // do the re-assignment
        temp = firstNr;
        firstNr = lastNr;
        lastNr = temp;
    }

    // error code if the user inputs two numbers which are the same
    else if ( firstNr == lastNr )
    {
        printf("\nError #502\nThe 'last' number has to be bigger than the 'first' number");
        printf("\nType the last number: ");
        scanf("%d", &lastNr);
    }

    // number counting
    printf("\n");
    for ( i = firstNr ; i <= lastNr ; i++ )
    {
        printf("%d ", i);
        printf("%f", convertToRadians(i) );
        
        // delay for readability
        Sleep(500);

        // new line for readability
        printf("\n");
    }
    // additional space for readability
    printf("\n\n");

    // exit the programme
    return 0;
}