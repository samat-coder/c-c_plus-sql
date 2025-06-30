#include<stdio.h>
int main(){

    int price,selling_price,profit,loss;

    printf("enter the price: ");
    scanf("%d",&price);
    printf("enter the selling price: ");
    scanf("%d",&selling_price);

    if (selling_price>price)
    {
        profit=selling_price-price;
        printf("your profit is %d",profit);
    }
    else if(price>selling_price)
    {
        loss=price-selling_price;
        printf("your loss is %d",loss);
    }
    else
    {
        printf("no profit and no loss");
    }
    

}