#include<stdio.h>
int main(){

    int r,c;
    r=1;
    while (r<=5)
    {
        c=1;

        while(c<=r)
        {
            printf(" * ");
            c++;
        }
        
        printf("\n");
        
        r++;
        
    }
   int r1=6;
    while (r1<=9)
    {
       int c1=9;
        while (c1>=r1)
        {
            printf(" * ");
            c1--;
        }
        printf("\n");
        r1++;
        
    }
    
    

}