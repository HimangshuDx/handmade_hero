//area and circumference of a circle

#include<stdio.h>
#define PI 3.14

void britto()
{
    float byasardho, kali, porixima;
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &byasardho);

    kali=PI * byasardho * byasardho;
    porixima=2 * PI * byasardho;
    
    printf("\nArea of the circle: %.2f", kali);
    printf("\nCircumference of the circle: %.2f\n\n", porixima);
}
int main()
{
    
britto();

return 0;
}
