#include<stdio.h>
int main(){

    int r,c,temp=1;
    r=1;
    while (r<=5)
    {
        c=1;

        while(c<=r)
        {
            printf(" %d ",temp);
            temp++;
            c++;
        }
        printf("\n");
        
        r++;
        
    }
    

}