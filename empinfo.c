/*-------------------------------------------------------------------------------------------------------------------------------
EmpInfo.c
Program to process employee information

11-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
typedef struct EmployeeType{
	int Eid;
	char EName[30];
	int Basic;
	float DA;
	float HRA;
	float PF;
	float GrossSalary;
	float NetSalary;
}EMPLOYEE;
EMPLOYEE E[20];
int N;
//------------------------------------------------------prototype----------------------------------------------------------------
void fnInputEmployee(EMP *E);
void fnPrintEmployee(EMP *E);
void fnEmpFileSearch(int empid);

main()
{
	int Choice,empid;
	
	system("clear");

	FILE *fp;
	printf("Program to procees employee information\n\n");
	while(Choice!=4){
		printf("\n-------------------------------------------------------------------------\n");
		printf("\tDELL COMPANIES\n");
		printf("\t\t\t\tMENU");
		printf("\n-------------------------------------------------------------------------\n");
		printf("1. Enter employee data\n");
		printf("2. Print salary slip of an employee\n");
		printf("3. Print consolidated salary slip\n");
		printf("4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&Choice);
		switch(Choice){
			case 1: fnInputEmployee(E);
					break;
			case 2: printf("Enter the employee id: ");
					scanf("%d",&empid);
					fnEmpFileSearch(empid);
					break;
			case 3: fnPrintEmployee();
					break;
			case 4:exit(0);
					break;
			default:printf("Sorry! You have entered a wrong choice");
		}
	}
}

//----------------------------------------------fnInputEmployeeData--------------------------------------------------------------
void fnInputEmployeeData()
{	
	int i;
	
	system("clear");
	
	if((fp=fopen("EmpDet.txt","w+"==NULL){
		printf("\nCannot create file!");
		exit(1);
	}else{
		printf("Enter the number of employees in the company: ");
		scanf("%d",&N);
		for(i=1;i<=N;i++){
			printf("\nEnter the details of the %dth employee\n",i);
			printf("Enter the employee number: ");
			scanf("%d",&E.Eid);
			printf("Enter the employee name: ");
			scanf("%s",E.EName);
			printf("Enter the basic salary: ");
			scanf("%d",&E.BasicSalary);
			DA=(20/100.0)*Basic;
			HRA=(11/100.0)*Basic;
			PF=(9/100.0)*Basic;
			GrossSalary=DA+HRA+PF;
			NetSalary=GrossSalary-PF;
			fwrite(&E,sizeof(EMPLOYEE),1,fp);
		}
		rewind(fp);
	}
	system("clear");
}
//----------------------------------------------fnPrintMarksCard--------------------------------------------------------------
void fnEmpFileSearch(int empid)
{
	system("clear");
	
	fseek(fp,(long)(sizeof(EMPLOYEE))*(empid-1),0);
	fread(&E,sizeof(EMPLOYEE),1,fp);
	printf("\n-------------------------------------------------------------------------\n");
	printf("\tDELL COMPANIES\n");
	printf("\n-------------------------------------------------------------------------\n");
	printf("Employee Details:\n");
	printf("Employee id:\t\t",E.Eid);
	printf("\nEmployee Name:\t",E.Ename);
	printf("Basic Salary:\t",Basic);
	printf("\nDA:\t\t",E.DA);
	printf("\nHRA\t\t",E.HRA);
	printf("\nPF\t\t",E.PF);
	printf("\nGross Salary:\t\t",E.GrossSalary);
	printf("\nNet Salary:\t\t",E.NetSalary);
}
//----------------------------------------------fnPrintClassReport--------------------------------------------------------------
void fnPrintEmployee()
{
	int i;
	
	system("clear");
	if((fp=fopen("EmpDet.txt","w+"==NULL){
		printf("\nCannot create file!");
		exit(1);
	}else{
		if(N!=0)
		{
			printf("\n---------------------------------------------------------------------------------\n");
			printf("\tDELL COMPANIES\n");
			printf("\t\tCONSOLIDATED REPORTS");
			printf("\n---------------------------------------------------------------------------------\n");
			printf("EmpId\tName\tBasic Salary\tDA\tHRA\tPF\tGross Salary\tNet Salary\n");
			printf("-----------------------------------------------------------------------------------\n");
			for(i=0;i<N;i++){
				fseek(fp,(long)(sizeof(EMPLOYEE))*(i),0);
				fread(&E,sizeof(EMPLOYEE),1,fp);
				printf("%d\t%s\t%d\t\t%d\t%\t%d\t\t%d\t%.2f\t%.2f",E->Eid,E->EName,E->Basic,E->DA,E->HRA,E->PF,E->GrossSalary,E->NetSalary);
			}
		}else{
			printf("Sorry! No employee records are available");
		}
	}
}