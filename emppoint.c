/*-------------------------------------------------------------------------------------------------------------------------------
Emppoint.c
Program to process employee information
DIVYA RAJ K5
11-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
typedef struct EmployeeType{
	int Eid;
	char EName[30];
	int BasicSalary;
}EMPLOYEE;
main()
{
	EMPLOYEE E,*Emp;
	Emp=&E;
	system("clear");
	printf("Program to process employee information\n\n");
	printf("Enter employee id, name and basic salary:\n");
	scanf("%d",&Emp->Eid);
	scanf("%s",Emp->EName);
	scanf("%d",&Emp->BasicSalary);
	printf("\nEmployee id: %d",Emp->Eid);
	printf("\nEmployee Name: %s",Emp->EName);
	printf("\nBasic salary: %d",Emp->BasicSalary);
}