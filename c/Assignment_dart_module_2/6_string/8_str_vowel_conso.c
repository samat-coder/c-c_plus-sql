#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	int i,vowel=0,consonent=0;
	
	printf("\n\n\t Enter a string : ");
	gets(str1);
	
   while (str1[i]!='\0')
   {
       if (str1[i]=='a' || str1[i]=='e'||str1[i]=='i' || str1[i]=='o'||str1[i]=='u')
       {
            vowel++;
       }
       else if(str1[i]>='a' &&  str1[i]<='z'){
            consonent++;
       }
       i++;
       
   }
   printf("\n\ttotal vowels are:%d",vowel);
   printf("\n\ttotal consonents are:%d",consonent);
   
     	
}