//area of a triangle

#include <stdio.h>
int area(int base, int height) 
{
    return (base * height) / 2;
}

int main() 
{
    int base, height;
    printf("\nEnter the base of the triangle: ");
    scanf("%d", &base);
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    
    int result = area(base, height);
    printf("\nThe area of the triangle is: %d\n", result);
    
    return 0;

}

