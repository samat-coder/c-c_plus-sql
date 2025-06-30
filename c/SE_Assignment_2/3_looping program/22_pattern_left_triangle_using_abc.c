#include<stdio.h>
int main(){

    int r,c;
    char ch='A';

    r=1;
    while (r<=5)
    {   
        c=1;
        while (c<=r)
        {
            printf(" %c ",ch);
            ch++;
            c++;
        }
        printf("\n");
        r++;
        
    }
    

}