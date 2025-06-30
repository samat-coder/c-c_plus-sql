#include<stdio.h>
int main(){

    int number;

    printf("\n\tenter the number you want to convert into character: ");
    scanf("%d",&number);

    if(number<0 || number>255)
    {
        printf("\n\t\tenter the valid number!!");
    }
    else
    {
        char character = (char) number;
        printf("\n\t\tcharacter is %c",character);
    }

}