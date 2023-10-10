#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int a = 1, b = 2, d = 0, radiusOfSphere;
    float f = 1.23f, f2 = 1.48f, pi = 3.14159f, volumeOfSphere, surfaceAreaOfSphere;
    char c = 0;
    
    // Ask the user to input the radius
    printf ("Type the radius of the sphere\n");
    scanf ("%d",&radiusOfSphere);
    
    volumeOfSphere = (4*pi*(float)radiusOfSphere*(float)radiusOfSphere*(float)radiusOfSphere)/3;
    surfaceAreaOfSphere = 4*pi*(float)radiusOfSphere*(float)radiusOfSphere; 

    // Use printf display text on the screen
    printf ("The variables are\na = %d\nb=%d\nf=%f\n", a, b, f);
    printf ("The other variables are\nd = %d\nc = %c\nf2 = %f\n", d, c,f2);
    printf ("For a sphere of radius %d:\nVolume = %.2f\nSurface Area = %.2f\n", radiusOfSphere, volumeOfSphere, surfaceAreaOfSphere);
    // Exit from main
    return 0;
}