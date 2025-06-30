#include<stdio.h>
int main(){

    int a[50],i,size,even_count=0,odd_count=0;

    printf("enter the size of array: ");
    scanf("%d",&size);

    for ( i = 0; i < size; i++)
    {
        printf("enter the value[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<size; i++){
        printf(" %d",a[i]);
    }
    printf("\n\t------even element---------");
    for ( i = 0; i < size; i++)
    {
        if(a[i]%2==0){
            printf("\n\t\t arr[%d]:%d",i,a[i]);
            even_count++;
        }
    }
    printf("\n\t total even element is: %d",even_count);
    printf("\n\t------odd element---------");
    for ( i = 0; i < size; i++)
    {
        if(a[i]%2!=0){
            printf("\n\t\t arr[%d]:%d",i,a[i]);
            odd_count++;
        }
    }
    printf("\n\t total odd element is: %d",odd_count);
    

    
    

}