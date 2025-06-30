#include<stdio.h>
int main(){

    float height;

    printf("enter your height : ");
    scanf("%f",&height);

    if (height<150)
    {
        printf("\n\t\tyou are categorized as small");
    }
    else if (height>=150 && height<=165)
    {
        printf("\n\t\tyou are categorized as average");
    }
    else if (height>=165 && height<=195)    
    {
        printf("\n\t\tyou are categorized as tall");
    }
    else
    {
        printf("\n\t\tyou are categorized as very tall");
    }
    
    
    

}