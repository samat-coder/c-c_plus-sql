#include<stdio.h>
int main(){

    char ch;

    printf("enter the character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("\n\t\tthe character %c is uppercase");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("\n\t\tthe character %c is lowercase");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("\n\t\tthe character %c is digit");
    }
    else
    {
        printf("\n\t\tthe character %c is special character");
    }
    
    

}