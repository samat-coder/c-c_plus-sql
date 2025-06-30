#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	int i,position,size;
	
	printf("\n\n\t Enter a string : ");
	scanf("%s",&str1);
    printf("\n\n\t Enter a position : ");
	scanf("%d",&position);
    printf("\n\n\t Enter a size : ");
	scanf("%d",&size);

    int length = strlen(str1);

    for ( i = position; i < size; i++)
    {
        printf(" %c",str1[i]);
    }
    
    
	
	
	
}