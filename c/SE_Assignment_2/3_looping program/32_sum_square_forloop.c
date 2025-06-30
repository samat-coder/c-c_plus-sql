#include<stdio.h>
int main(){

    int num,i,partial_sum,total_sum=0;

    printf("enter the number you want to up to addition: ");
    scanf("%d",&num);

   for ( i = 1; i<=num; i++)
   {
        partial_sum=0;
      for ( int j=1; j<=i; j++)
      {
           partial_sum=partial_sum+j;
      }
      total_sum=total_sum+partial_sum;
      
   }
   
    printf("the sum of series number:%d",total_sum);

}