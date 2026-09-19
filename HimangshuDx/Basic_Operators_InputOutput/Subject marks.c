//total and average marks of five subjects.

#include<stdio.h>

int main()
{
 
    float n,marks[5], sum=0;
    printf("\nEnter the total Marks of one Subject:");
    scanf("%f",&n);
    printf("\nEnter the marks of five subjects:\n");

    for (int i=0;i<5;i++)
    {
        printf("Subject %d: ",i+1);
        scanf("%f",&marks[i]);

        sum+=marks[i];
    }

    printf("\nTotal Marks of five subjects: %.2f\n",sum);

    printf("\nAverage Marks of five subjects: %.2f\n",sum/n);

    return 0;
}