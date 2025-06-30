#include<stdio.h>
int main(){

    char user;

    printf("enter the character: ");
    scanf("%c",&user);

    if(user=='A' || user=='E' ||user=='I' || user=='O' || user=='U' || user=='a' || user=='e' || user=='i' || user=='o' || user=='u')
    {
        printf("\n\t\t\t\t%c is vowel",user);
    }
    else
    {
        printf("\n\t\t\t\t%c is consonant",user);
    }


}