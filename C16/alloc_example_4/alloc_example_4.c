#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Declare an integer array and an integer pointer
    int *pData;

    // Prompt for user input of array size
    int size, i;
    printf("Type in the size of array: ");
    scanf("%d", &size);

    // Using calloc (same approach malloc)
    pData = (int *)calloc ( size , sizeof (int));

    if ( pData == NULL)
    {
        printf ("\nMemory could not be allocated - terminating");
        return -1;  // Use minus one as we did not exit sucesfully
    }

     // We have our  memory, make use of it here!
     // Populate the array with values
    for ( i = 0; i < size; i++ )
    {
        pData[i] = i;
        printf("Array element %d has value %d\n", i, pData[i]);
    }

    // Free up the allocated memoey
    free (pData);

    return 0;   // Exit sucesfully
}   