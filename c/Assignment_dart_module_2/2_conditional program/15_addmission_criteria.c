#include<stdio.h>
int main(){

    int math,phy,chem,total,total_math_phy;

    printf("enter your math subject marks: ");
    scanf("%d",&math);
    printf("enter your physics subject marks: ");
    scanf("%d",&phy);
    printf("enter your chemastry subject marks: ");
    scanf("%d",&chem);

    total=math+phy+chem;
    total_math_phy=math+phy;

    printf("\n\ttotal is %d",total);
    printf("\n\tmath and physics totals are %d",total_math_phy);

    if(math>=65 && phy>=55 && chem>=50 && (total>=190 || total_math_phy>=140))
    {
        printf("\n\tthe candidate is eligible");
    }
    else
    {
        printf("\n\tthe candidate is not eligible");
    }

}