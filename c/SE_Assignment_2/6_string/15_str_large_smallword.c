#include<stdio.h>
#include<string.h>
int main(){

    char str[50],large[30],small[30],word[30];
    int i=0,j=0,max=0,min=100;

    printf("enter the string: ");
    gets(str);

    while (1)
    {
        while (str[i]!=' ' && str[i]!='\0')
        {
           word[j]=str[i];
           j++;
           i++;
        }
        word[j]='\0';
        int len=0;
        len=strlen(word);   

        if (len>max)
        {
            max=len;
            strcpy(large,word);
        }
        if (len<min)
        {
            min=len;
            strcpy(small,word);
        }
        
        j=0;
        if (str[i]=='\0')
        {
            break;
        }
        
        i++;

          
    }
    printf("\n\tsmall word: %s",small);
    printf("\n\tlarge word: %s",large);
    


}