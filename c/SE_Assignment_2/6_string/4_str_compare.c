#include<stdio.h>
int main()
{
	char str1[20],str2[20];
	int i,count=0,count2=0;
	
	printf("\n\n\t Enter a string 1 : ");
	scanf("%s",&str1);
	printf("\n\n\t Enter a string 2 : ");
	scanf("%s",&str2);
    
	printf("\n\t----------string 1----------\n");
    for(i=0;str1[i]!='\0';i++)
	{
		printf("%c", str1[i]);
		count++;
	}
    printf("\n");
	printf("\n\t----------string 2----------\n");
    for(i=0;str2[i]!='\0';i++)
	{
		printf("%c", str2[i]);
		count2++;
	}

	if(count>count2){
		printf("\n\tstr1 length is greater");

	}
	else if(count==count2){
		printf("\n\tstr1 and 2 both length are same");
	}
	else if(count2>count){
		printf("\n\tstr2 length is greater");
	}
	else{
		printf("again enter the details");
	}

    
	

    
    
	
	
	
}