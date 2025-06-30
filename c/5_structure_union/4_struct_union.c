#include<stdio.h>

union Student   
{
	int rollno;     
	char sname[30];
	float per;
	char grade;
}stud;

int main()
{
	
	
	printf("\n\n\t Enter a Rollno : ");
	scanf("%d",&stud.rollno);
	printf("\n\n\t Enter Student's Name : ");
	scanf("%s",&stud.sname);
	printf("\n\n\t Enter Per : ");
	scanf("%f",&stud.per);
	printf("\n\n\t Enter a Grade : ");
	scanf(" %c",&stud.grade);
	
	printf("\n\n\t Rollno : %d",stud.rollno);
	printf("\n\n\t Name : %s",stud.sname);
	printf("\n\n\t Per : %.2f",stud.per);
	printf("\n\n\t Grade : %c",stud.grade);
}