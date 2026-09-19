//number is positive, negative or zero?

# include<stdio.h>

int main()

{

    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if(num > 0)
        printf("\n%d is positive.\n", num);
    else if(num < 0)
        printf("\n%d is negative.\n", num);
    else
        printf("\nYou entered zero.\n");

    return 0;

}