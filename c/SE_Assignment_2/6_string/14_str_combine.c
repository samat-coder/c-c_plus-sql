#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int i;
	
	printf("\n\n\t Enter a string : ");
	scanf("%s",&str1);
   
    for ( i = 0; str1[i]!='\0'; i++)
    {
        if(str1[i]>='a' && str1[i]<='z'){
            str1[i]=str1[i]-32;
        }
        
    }
    printf("%s",str1);
    
    
	
	
	
}