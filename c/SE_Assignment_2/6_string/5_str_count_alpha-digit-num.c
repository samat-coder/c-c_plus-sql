#include<stdio.h>
int main()
{
	char str1[40];
	int i=0, alpha=0,digit=0,special_char=0;
	
	printf("\n\n\t Enter a string : ");
	scanf("%s",&str1);
	
	while (str1[i]!='\0')
    {
        if((str1[i]>='a') && (str1[i]<='z')||(str1[i]>='A') && (str1[i]<='Z')){
            alpha++;
        }
        else if(str1[i]>='0' && str1[i]<='9'){
            digit++;
        }
        else if (str1[i] != '\n') {
            special_char++;
        }
        i++;
    }

    printf("\n\ttotal alphabet is:%d",alpha);
    printf("\n\ttotal digit is:%d",digit);
    printf("\n\ttotal special character is:%d",special_char);
    
}