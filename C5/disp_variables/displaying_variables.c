
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Declare some variables
    int a = 1, b = 2;
    float f = 1.23f;
    int d = 0;
    char c = 0;
    float f2 = 1.48;
    int radiusOfSphere = 1;
    float volumeOfSphere = (4*M_PI*(float)radiusOfSphere*(float)radiusOfSphere*(float)radiusOfSphere)/3;
    float surfaceAreaOfSphere = 4*M_PI*(float)radiusOfSphere*(float)radiusOfSphere; 

    // Use printf display text on the screen
    printf ("The variables are\na = %d\nb=%d\nf=%f\n", a, b, f);
    printf ("The other variables are\nd = %d\nc = %c\nf2 = %f\n", d, c,f2);
    printf ("For a sphere of radius %d:\nVolume = %.2f\nSurface Area = %.2f\n", radiusOfSphere, volumeOfSphere, surfaceAreaOfSphere);
    // Exit from main
    return 0;
}