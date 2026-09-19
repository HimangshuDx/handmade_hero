// largest & smallest of three 

#include <stdio.h>

int largest(int ek, int dui,int tini)
{
    if (ek > dui && ek > tini)
        return ek;
    else if (dui > ek && dui > tini)
        return dui;
    else
        return tini;
    
}

int smallest(int ek, int dui,int tini)
{
    if (ek < dui && ek < tini)
        return ek;
    else if (dui < ek && dui < tini)
        return dui;
    else
        return tini;
    
}

int main()
{
    int ek, dui,tini,l,s;

    printf("\nEnter three numbers: \n");
    scanf("%d %d %d", &ek, &dui, &tini);

    l= largest(ek, dui, tini);
    s= smallest(ek, dui, tini);

    printf("\n%d is the largest number.\n", l);
    printf("And %d is the smallest number.\n\n", s);

    return 0;
}