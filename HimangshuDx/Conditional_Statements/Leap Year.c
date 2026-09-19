// check if a year is a leap year

int main()
{
    int bosor;
    printf("Enter a year: ");
    scanf("%d", &bosor);

    if (bosor % 4 == 0)
    {
        if (bosor % 100 == 0)
        {
            if (bosor % 400 == 0)
                printf("%d is a leap year.\n", bosor);
            else
                printf("%d is not a leap year.\n", bosor);
        }
        else
            printf("%d is a leap year.\n", bosor);
    }
    else
        printf("%d is not a leap year.\n", bosor);

    return 0;
}