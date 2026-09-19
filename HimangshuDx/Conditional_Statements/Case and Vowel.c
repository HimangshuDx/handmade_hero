//character is uppercase or lowercase?
// character is a vowel or consonant?

#include<stdio.h>


int main()
{
    char ch;
    printf("\nEnter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf(" '%c' is an uppercase alphabet.\n\n", ch);
    else if(ch >= 'a' && ch <= 'z')
        printf(" '%c' is a lowercase alphabet.\n", ch);

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("And '%c' is a vowel.\n\n", ch);
    else
        printf("And '%c' is a consonant.\n\n", ch);

    return 0;
}
