#include<stdio.h>
int main(){

        int user,i=1,t1=0,t2=1,total;

        printf("\n\tenter the number");
        scanf("%d",&user);

        printf("\n\t\t%d, %d",t1,t2);

        while (i<=user )
        {
            total=t1+t2;
            printf(" %d",total);

            t1=t2;
            t2=total;
            i++;
        }
        

}