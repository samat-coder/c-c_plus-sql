#include<stdio.h>
struct empinfo
{
   int empno;
   char name[20];
   char address[50];
   int age;
}emp;

int main(){

    printf("\n\t-------------employee information--------------\n");
    printf("enter your employee number: ");
    scanf("%d",&emp.empno);
    printf("enter your name: ");
    scanf("%s",&emp.name);
    printf("enter your address: ");
    scanf("%s",&emp.address);
    printf("enter your age: ");
    scanf("%d",&emp.age);

    printf("\n\temployee number: %d",emp.empno);
    printf("\n\temployee name: %s",emp.name);
    printf("\n\temployee address: %s",emp.address);
    printf("\n\temployee age: %d",emp.age);


}