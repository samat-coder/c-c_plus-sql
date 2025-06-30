#include <stdio.h>
struct empinfo
{
    int empno;
    char name[20];
    char address[50];
    int age;
} emp[5];

int main()
{

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\n\t-------------employee %d--------------\n",i+1);
        printf("enter your employee number: ");
        scanf("%d", &emp[i].empno);
        printf("enter your name: ");
        scanf("%s", &emp[i].name);
        printf("enter your address: ");
        scanf("%s", &emp[i].address);
        printf("enter your age: ");
        scanf("%d", &emp[i].age);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n\temployee number: %d", emp[i].empno);
        printf("\n\temployee name: %s", emp[i].name);
        printf("\n\temployee address: %s", emp[i].address);
        printf("\n\temployee age: %d", emp[i].age);
        printf("\n");
    }

}