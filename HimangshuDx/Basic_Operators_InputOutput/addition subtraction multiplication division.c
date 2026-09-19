// perform addition, subtraction, multiplication and division of two numbers.

#include<stdio.h>
int main ()
{
    int ek, dui;

    printf("\nEnter the first number: ");
    scanf("%d", &ek);
    printf("\nEnter the second number: ");
    scanf("%d", &dui);

    printf("\nAddition of %d and %d is: %d", ek, dui, ek + dui);

    /* 
    printf("\n Faaah, Nigetive value dekhabo mon jua nai mur...");
    if(ek>dui)
    {
        printf("\nSubtraction of %d and %d is: %d", ek, dui, ek - dui);
    
    }
    else
    {
        printf("\nSubtraction of %d and %d is: %d", dui, ek, dui - ek);
    } 
    */
   
    printf("\nSubtraction of %d and %d is: %d", ek, dui, ek - dui);
    printf("\nMultiplication of %d and %d is: %d", ek,  dui, ek * dui);
    if (dui != 0)
    {
        printf("\nDivision of %d and %d is: %d", ek, dui, ek / dui);
    }
    else
    {
        printf("\nDivision by zero is not allowed.");
    }
    
    return 1;
}