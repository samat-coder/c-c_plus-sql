#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	int i;
	int is=0;

	printf("\n\n\t Enter a string : ");
	scanf("%s",&str1);
   
    for ( i = 0; str1[i]!='\0'; i++)
    {
        if(str1[i]=='i' && str1[i+1] == 's'){
            is++;
        }
        
    }
    printf("%d",is);
    
    
	
	
	
}