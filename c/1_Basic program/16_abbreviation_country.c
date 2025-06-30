#include<stdio.h>
int main(){

    char countryname[35] = "united state america";

    printf("\n\tcountry is: %s",countryname);
    printf("\n\n\tabbreviation: %c.%c.%c",countryname[0],countryname[7],countryname[13]);

}