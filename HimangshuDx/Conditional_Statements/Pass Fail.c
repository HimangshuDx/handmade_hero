//student has passed or failed based on marks?
//grades based on marks.

#include<stdio.h>

void check(int marks, int pass)
{
    if(marks>=pass)
        printf("\nStudent has Passed. Mojjaa!!");
    else
        printf("\nStudent has Failed. Bhalke porh!!");
}

void grade(int marks)
{
    if(marks>=80)
        printf("\nGrade: A");
    else if(marks>=60)
        printf("\nGrade: B");
    else if(marks>=40)
        printf("\nGrade: C");
    else
        printf("\nGrade: Toi fail. Bhalke porh!!\n");
}

int main()
{
    int marks, pass;

    printf("\nEnter the passing marks of the subject:");
    scanf("%d", &pass);
    printf("\nEnter the marks of the student[0-100]: ");
    scanf("%d", &marks);

    check(marks,pass);
    grade(marks);

    return 0;
}
