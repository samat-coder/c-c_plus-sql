#include<stdio.h>
int main(){

    char ch;

    printf("enter the character: ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("\n\t vowel");
        break;
    
    default:printf("\n\t consonant");
        break;
    }

}
