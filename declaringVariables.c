//This program is a simple declaring variables practice

#include <stdio.h>

#define DOG 1.1f

int main()

{
    float libra, make;

    printf("Put a number into libra, make it a decimal: \n");
    scanf("%f", &libra);
    make = DOG + libra;
    printf("%.2f", make);
    return 0;
}