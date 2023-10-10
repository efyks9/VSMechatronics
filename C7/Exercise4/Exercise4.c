#include <stdio.h>

int main ()
{
    char Name[51];
    printf("What is your name?\n");
    scanf("%s",Name);
    printf("Hello %s!", Name);
    return 0;
}