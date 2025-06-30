#include<stdio.h>
int main(){

        int maths,science,gujarati,socialscience;

        printf("enter your math marks");
        scanf("%d",&maths);
        printf("enter your science marks");
        scanf("%d",&science);
        printf("enter your gujarati marks");
        scanf("%d",&gujarati);
        printf("enter your socialscience marks");
        scanf("%d",&socialscience);

        if(maths>40 && science>40 && gujarati>40 && socialscience>40)
        {
            printf("\n\nmaths=%d, \n\nscience=%d, \n\ngujarati=%d, \n\nsocialscience=%d \n\n pass",maths,science,gujarati,socialscience);
        }
        else
        {
            printf("\n\nmaths=%d, \n\nscience=%d, \n\ngujarati=%d, \n\nsocialscience=%d",maths,science,gujarati,socialscience);
            printf("\n\n\tresult=fail");
        }
}