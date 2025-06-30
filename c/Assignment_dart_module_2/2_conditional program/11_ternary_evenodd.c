#include<stdio.h>
int main(){

    int num;

    printf("enter the number: ");
    scanf("%d",&num);

    (num % 2 == 0) ? printf("%d is even number",num):printf("%d is odd number",num);

}