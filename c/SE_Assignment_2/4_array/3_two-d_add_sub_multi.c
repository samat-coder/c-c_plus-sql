#include<stdio.h>
int main()
{
	int arr1[10][10], arr2[10][10], r, c,k,mul[10][10];
	int rs, cs;
	
	printf("\n\n\t Enter row size  for array : ");
	scanf("%d",&rs);
	printf("\n\n\t Enter col size  for array : ");
	scanf("%d",&cs);
	
	printf("\n\n\n\t Matrix-1 ---------------");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf("\n\n\t Enter arr[%d][%d] : ", r, c);
				scanf("%d",&arr1[r][c]);
			}
		
	}
	
	printf("\n\n\n\t Matrix-2 ---------------");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf("\n\n\t Enter arr[%d][%d] : ", r, c);
				scanf("%d",&arr2[r][c]);
			}
		
	}
	
	printf("\n\t Matrix-1 ---------------\n");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf(" %d", arr1[r][c]);
				
			}
			printf("\n");
	}
	
	printf("\n Matrix-2 ---------------\n");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf(" %d", arr2[r][c]);
				
			}
			printf("\n");
	}
	
	printf("\n Addition of 2 matrices ---------------\n");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf(" %d",arr1[r][c]+arr2[r][c]);
				
			}
			printf("\n");
	}
    printf("\n subtraction of 2 matrices ---------------\n");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf(" %d",arr1[r][c]-arr2[r][c]);
				
			}
			printf("\n");
	}
     printf("\n multiplication of 2 matrices ---------------\n");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{    mul[r][c]=0;
                for ( k = 0; k < cs; k++)
                {
                   
				mul[r][c]=arr1[r][k]*arr2[k][c];
                }
			}
			printf("\n");
	}
    for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf(" %d", mul[r][c]);
				
			}
			printf("\n");
	}
    printf("\n divison of 2 matrices ---------------\n");
    for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf(" %d",arr1[r][c]/arr2[r][c]);
				
			}
			printf("\n");
	}
	
}