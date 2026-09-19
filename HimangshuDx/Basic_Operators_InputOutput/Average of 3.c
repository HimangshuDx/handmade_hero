// Average of 3 numbers and 5 numbers

#include <stdio.h>

float average3(float ek, float dui, float tini)
{
    return (ek + dui + tini) / 3;
}

float average5(float ek, float dui, float tini, float saari, float pass)
{
    return (ek + dui + tini + saari + pass) / 5;
}

int main()
{
    float ek, dui, tini, saari, pass, uttor;
    int n;

    printf("\nHow many numbers do you want to average? (3 or 5): ");
    scanf("%d", &n);

    if (n == 3)
    {
        printf("Enter three numbers: \n");
        scanf("%f %f %f", &ek, &dui, &tini);

        uttor = average3(ek, dui, tini);

        printf("\nAverage of the three numbers: %.2f\n", uttor);
    }
    else if (n == 5)
    {
        printf("Enter five numbers: \n");
        scanf("%f %f %f %f %f", &ek, &dui, &tini, &saari, &pass);

        uttor = average5(ek, dui, tini, saari, pass);

        printf("\nAverage of the five numbers: %.2f\n", uttor);
    }
    else
    {
        printf("Invalid input. Please enter either 3 or 5.\n");
    }

    return 0;
}