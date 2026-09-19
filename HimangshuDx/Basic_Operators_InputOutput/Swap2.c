//swap two variables using a third variable.


#include<stdio.h>

int main()
{
    int ek, dui, khali;
    printf("\nEnter the value of in Storage-A: ");
    scanf("%d", &ek);
    printf("Enter the value of in Storage-B: ");
    scanf("%d", &dui);

    khali = ek;
    ek = dui;
    dui = khali;

    printf("\nAfter swapping:\n");
    printf("The value in Storage-A is = %d", ek);
    printf("\nThe value in Storage-B is = %d\n", dui);

    /*
    Without Using a Third Variable:

    printf("\nThe value in Storage-A is = %d", dui);
    printf("\nThe value in Storage-B is = %d\n", ek);
    */

    
    /*
    exchange two floating-point variable

    float a, b, temp;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &a, &b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("After exchanging: a = %.2f, b = %.2f\n", a, b);   
    */

    return 0;
}

