#include<stdio.h>
int main(){

        double height,width,length,area;

        printf("\n\tenter the length of side height: ");
        scanf("%lf",&height);
        printf("\n\tenter the length of side width: ");
        scanf("%lf",&width);
        printf("\n\tenter the length of side length: ");
        scanf("%lf",&length);

        area=2*(width*length + height*length + height*width);

        printf("area of rectangular: %lf",area);

}