#include<stdio.h>
int main(){

    int user,i=1,even_sum=0,odd_sum=0;
    
    while (i<=5)
    {
        printf("enter the number: ");
        scanf("%d",&user);

        if(user%2==0){
            even_sum+=user;
        }
        else{
            odd_sum+=user;
        }
        i++;
    }
    printf("even sum: %d\n",even_sum);
    printf("odd sum: %d\n",odd_sum);
    

}