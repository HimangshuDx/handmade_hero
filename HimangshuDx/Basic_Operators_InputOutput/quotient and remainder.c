//Quotient and remainder of two numbers.

#include<stdio.h>
int main()
{
    int bhajyo, bhajok, bhagfol, baki;

    printf("\nEnter dividend: ");
    scanf("%d", &bhajyo);
    printf("Enter divisor: ");
    scanf("%d", &bhajok);

    if (bhajok == 0)
    {
        printf("Division by zero is not allowed.\n");
        return 1;
    }

    bhagfol = bhajyo / bhajok;
    baki = bhajyo % bhajok;

    printf("\nQuotient: %d\n", bhagfol);
    printf("Remainder: %d\n", baki);

    return 0;
}
