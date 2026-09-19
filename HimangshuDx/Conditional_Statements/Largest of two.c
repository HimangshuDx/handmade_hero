//largest & smallest of two

#include <stdio.h>

int largest(int ek, int dui)
{
    if (ek > dui)
        return ek;
    else
        return dui;
}

int smallest(int ek, int dui)
{
    if (ek < dui)
        return ek;
    else
        return dui;
}

int main()
{
    int ek, dui,l,s;

    printf("\nEnter two numbers: \n");
    scanf("%d %d", &ek, &dui);

    l= largest(ek, dui);
    s= smallest(ek, dui);

    printf("\n%d is the largest number.\n", l);
    printf("And %d is the smallest number.\n\n", s);

    return 0;
}