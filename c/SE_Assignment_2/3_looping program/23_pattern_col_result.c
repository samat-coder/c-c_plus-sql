#include<stdio.h>
int main(){

    int r,c;
    char ch;

    r=1;
    while (r<=5)
    {   
        c=1;
        ch='A';
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