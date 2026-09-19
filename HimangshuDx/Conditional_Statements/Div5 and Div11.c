//number is divisible by 5 and 11?
//number is divisible by both 3 and 5?
#include<stdio.h>

void div5(int nombor)
{
    if(nombor%5==0)
        printf("\n%d is Divisible by 5.",nombor);
    else 
        printf("\n%d is Not Divisible by 5.", nombor);

}

void div11(int nombor)
{
    if(nombor%11==0)
        printf("\n%d is Divisible by 11.",nombor);
    else 
        printf("\n%d is Not Divisible by 11.", nombor);

}

void div3and5(int nombor)
{
    if(nombor%3==0 && nombor%5==0) 
        printf("\n%d is Divisible by both 3 and 5.",nombor);
    else if(nombor%3==0)
        printf("\n%d is Divisible by 3 but Not Divisible by 5.", nombor);
    else if(nombor%5==0)
        printf("\n%d is Divisible by 5 but Not Divisible by 3.", nombor);
    else 
        printf("\n%d is Not Divisible by both 3 and 5.", nombor);

}

int main()
{
    int nombor;

    printf("\nEnter a Number: ");
    scanf("%d", &nombor);

    div11(nombor);
    div5(nombor);
    div3and5(nombor);

return 0;    
}