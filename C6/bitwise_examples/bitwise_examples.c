#include <stdio.h>

int main ()
{
    unsigned int A, B, R;
    A = 60;
    B = 13; 
    R = A & B;
    printf("A & B = %#x\n", R);
    R = A | B;
    printf("A | B = %#x\n", R);
    R = A ^ B;
    printf("A ^ B = %#x\n", R);
    R = ~A;
    printf("~A = %#x\n", R);
    R = ~B;
    printf("~B = %#x\n", R);
    R = A << 2;
    printf("A << 2 = %#x\n", R);
    R = B << 2;
    printf("B << 2 = %#x\n", R);
    R = A >> 2;
    printf("A >> 2 = %#x\n", R);
    R = B >> 2;
    printf("B >> 2 = %#x\n", R); 
}