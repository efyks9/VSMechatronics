#include <stdio.h>
#include <math.h>

int main ()
{
    int r, h;
    float SA;
    printf("Type the radius and height of cylinder seperated by a space\n");
    scanf("%d %d",&r, &h);
    SA = (2*M_PI*(float)r*(float)r) + (2*M_PI*(float)r*(float)h);
    printf ("Surface Area = %.3f\n", SA); 
}