#include<stdio.h>

main()
{
	int n,n1,i;
	i=1;
	
	
	while(i)
	{
	
		printf("\n\n\t1 for Addition \n\t2 for Subtraction\n\t3 for Multipication \n\t4 for Division  \n\t0 for Exit\n\tEnter you Choice :");
		scanf("%d",&i);
		
		if(i==0)
		{
			break;
		}
		
		printf("\n\n\tEnter number 1 : ");
		scanf("%d",&n);
		
		printf("\n\n\tEnter number 2 : ");
		scanf("%d",&n1);
		

		switch(i)
		{
			case 0:
				break;
			
			case 1:
				printf("\n\n\t%d + %d = %d",n,n1,n+n1);
				break;
			case 2:
				printf("\n\n\t%d - %d = %d",n,n1,n-n1);
				break;
			case 3:
				printf("\n\n\t%d X %d = %d",n,n1,n*n1);
				break;
			case 4:
				printf("\n\n\t%d / %d = %d",n,n1,n/n1);
				break;
			default:
				printf("\n\n\tEntered choice is Invalid .");
				break;
		}
		
	}
	
}