#include<stdio.h>

struct Dept //outer struct
{
	int did;
	char dname[30];
	char branch[30];
	
	struct Employee  //innner struct
	{
		int eid;
		char ename[30];
		int salary;
	}E;
}D;

main()
{
	printf("\n\n\t Enter Department Id : ");
	scanf("%d",&D.did);
	printf("\n\n\t Enter Department Name : ");
	scanf("%s",&D.dname);
	printf("\n\n\t Enter a branch : ");
	scanf("%s",&D.branch);
	
	printf("\n\n\t Enter Employee's ID : ");
	scanf("%d",&D.E.eid);
	printf("\n\n\t Enter Employee's Name : ");
	scanf("%s",&D.E.ename);
	printf("\n\n\t Enter Salary : ");
	scanf("%d",&D.E.salary);
	
	printf("\n\n\t Department Id : %d",D.did);
	printf("\n\n\t Department Name : %s",D.dname);
	printf("\n\n\t Branch : %s",D.branch);
	printf("\n\n\t Employee's ID : %d",D.E.eid);
	printf("\n\n\t Employee's Name : %s",D.E.ename);
	printf("\n\n\t Salary : %d",D.E.salary);
}