//swap three variables using a third variable.


#include<stdio.h>

int main()
{
    int ek, dui,tini,khali;
    printf("\nEnter the value of in Storage-A: ");
    scanf("%d", &ek);
    printf("Enter the value of in Storage-B: ");
    scanf("%d", &dui);
    printf("Enter the value of in Storage-C: ");
    scanf("%d", &tini);

    khali = ek;
    ek = dui;
    dui = tini;
    tini = khali;

    printf("\nAfter swapping:\n");
    printf("The value in Storage-A is = %d", ek);
    printf("\nThe value in Storage-B is = %d", dui);
    printf("\nThe value in Storage-C is = %d\n", tini);

    return 0;
}
