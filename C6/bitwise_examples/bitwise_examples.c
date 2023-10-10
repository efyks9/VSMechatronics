#include <stdio.h>

int main ()
{
    unsigned int A, B, R;
    A = 60;
    B = 13; 
    R = A & B;
    printf("A & B = %d\n", R);
    R = A | B;
    printf("A | B = %d\n", R);
    R = A ^ B;
    printf("A ^ B = %d\n", R);
    R = ~A;
    printf("~A = %d\n", R);
    R = ~B;
    printf("~B = %d\n", R);
    R = A << 2;
    printf("A << 2 = %d\n", R);
    R = B << 2;
    printf("B << 2 = %d\n", R);
    R = A >> 2;
    printf("A >> 2 = %d\n", R);
    R = B >> 2;
    printf("B >> 2 = %d\n", R); 
}