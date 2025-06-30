#include<stdio.h>
int main(){

    int num,reversed=0,remainder;

    printf("enter the number you want to see result in reverse: ");
    scanf("%d",&num);
    
    for(; num!=0; num=num/10){
        remainder=num%10;
        reversed=reversed*10+remainder;
    }

    printf("reversed number: %d",reversed);

}