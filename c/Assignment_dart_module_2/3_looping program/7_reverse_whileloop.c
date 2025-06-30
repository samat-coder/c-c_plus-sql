#include<stdio.h>
int main(){

        int user,remainder;

        printf("enter the number you want to see result in reverse");
        scanf("%d",&user);

        while (user>0)
        {
            remainder=user%10;
            printf("%d",remainder);
            user=user/10;
        }
        

}