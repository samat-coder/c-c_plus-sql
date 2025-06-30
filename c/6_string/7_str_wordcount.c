#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	int i,space=0;
	
	printf("\n\n\t Enter a string : ");
	gets(str1);
	
    printf("%s",str1);
	for ( i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == ' ')
        {
            space++;
        }
                
    }
    printf("\n\ttotal words are: %d",space+1);
    	
}