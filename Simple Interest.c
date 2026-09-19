//Find Simple Interest.

#include<stdio.h>
int main()
{
    int muldhon,xomoy;
    float haar,xoot;

    printf("\nEnter the principal amount: ");
    scanf("%d", &muldhon);
    printf("Enter the rate of interest[Percentage]: ");
    scanf("%f", &haar);
    printf("Enter the time period[years]: ");
    scanf("%d", &xomoy);

    xoot=(muldhon * haar * xomoy) / 100;

    printf("\nSimple Interest is: %.2f\n", xoot);

         //total amount using simple interest
    printf("\nTotal Amount with %.2f percent interest and after %d years is: %.2f\n\n", haar, xomoy , (muldhon + xoot));      
    
    return 0;
}