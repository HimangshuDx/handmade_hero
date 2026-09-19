//perform multiplication (*) and modulus (%) of two numbers.

#include<stdio.h>
int main()
{
    int ek, dui;

    printf("\nEnter two numbers: ");
    scanf("%d %d", &ek, &dui);

    printf("\nMultiplication of %d and %d is: %d\n", ek, dui, ek * dui);
    printf("The Modulus of %d and %d is: %d\n", ek, dui, ek % dui);

    return 0;
}
