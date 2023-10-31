#include <stdio.h>
#include <stdlib.h>

#define M_PI 3.14159265358979323846264338327950288

// Function to convert to radians
float convertToRadians (int degrees)
{
    float radians = M_PI * (float) degrees / 180.0f;
    
    return radians;
}
// Simple function to populate an float array
void PopulateTheArray ( int Size, float ArrayData[])
{
    int i;      // Variable to use in our loop

    for ( i = 0 ; i < Size ; i++)
    {
        ArrayData[i] = convertToRadians(i); // Treat it like a normal array
    }
}
// Simple function do display contents an float array
void DisplayTheArray ( int Size, float ArrayData[])
{
    int i;      // Variable to use in our loop

    for ( i = 0 ; i < Size ; i++)
    {
        printf ("Item %d of the array contains %0.3f\n", i, ArrayData[i]);
    }
}
// Main () - execution starts here
int main (void)
{

    int iSizeForArray;
    float *pData = NULL;              // A pointer to hold the base address of out array
    float *pDataStartValue = NULL;    // A pointer to hold the start value of the array
    // Ask for the size of the array and store result

    printf("\nPlease enter the size of the array to dynamically allocate");
    scanf ("%d", &iSizeForArray);

    // Use calloc with checking
    pData = (float *)calloc ( iSizeForArray, sizeof (float));

    // Check we got the memory
    if ( pData == NULL)
    {
        printf ("\nSorry, I could not allocate the memory, bye!");
        return -1;
    }

    pDataStartValue = pData;

    // Pass the size, iSizeForArray) and the pointer created 
    // which points to the start of the sucesfully allocated memory

    PopulateTheArray(iSizeForArray, pData);
    pData = pDataStartValue;    // Return the pointer to the start value
    DisplayTheArray(iSizeForArray, pData);

    free (pData);	    // Free up the memory before exiting

    return (0);     // Exit indicating sucess
}