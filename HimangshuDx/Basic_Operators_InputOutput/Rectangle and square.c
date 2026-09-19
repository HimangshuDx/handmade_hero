#include<stdio.h>

//area and perimeter of a rectangle
void rectangle()
{
    int digh, prosto;
    printf("Enter the length of rectangle: ");
    scanf("%d", &digh);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &prosto);

    printf("\nArea of rectangle is: %d\n", digh*prosto);
    printf("Perimeter of rectangle is: %d\n", 2*(digh+prosto));
}

//area and perimeter of a square
void square()
{
    int l;
    printf("\nEnter the side of square: ");
    scanf("%d", &l);

    printf("\nArea of square is: %d\n", l*l);
    printf("Perimeter of square is: %d\n", 4*l);


}

int main()
{
    rectangle();

    square();

    return 0;
}