#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846264338327950288

// include the header file for function
float convertToRadians (int degrees);

int main ()
{
    float degrees;
    printf("Type a value for degrees: ");
    scanf("%f",&degrees);
    float radians = convertToRadians(degrees);
    printf("%.3f radians\n", radians);

    return 0;
}

float convertToRadians (int degrees)
{
    float radians = M_PI * (float) degrees / 180.0f;
    
    return radians;
}
