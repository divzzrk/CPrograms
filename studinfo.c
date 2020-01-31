/*-------------------------------------------------------------------------------------------------------------------------------
StudInfo.c
Program to process student information
DIVYA RAJ K
11-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
//#include<string.h>
#include<stdlib.h>
typedef struct StudentType{
	int Regno;
	char Name[30];
	int Mk1;
	int Mk2;
	int Mk3;
	int Total;
	float Avg;
	int Result;
}STUDENT;
STUDENT S[20];
int N;
//------------------------------------------------------prototype----------------------------------------------------------------
void fnInputStudentData();
void fnPrintMarksCard();
void fnPrintClassReport();
int fnMenu();
main()
{
	int Choice;
	
	system("clear");

	printf("Program to procees student information\n\n");
	while(Choice!=4){
		Choice=fnMenu();
		switch(Choice){
			case 1: fnInputStudentData();
					break;
			case 2: fnPrintMarksCard();
					break;
			case 3: fnPrintClassReport();
					break;
			case 4:exit(0);
					break;
			default:printf("Sorry! You have entered a wrong choice");
		}
	}
}
//---------------------------------------------------------fnMenu---------------------------------------------------------------
int fnMenu()
{
	int Choice;
	
	printf("\n-------------------------------------------------------------------------\n");
	printf("\tST.ALOYSIUS INSTITUTE OF MANAGEMENT AND INFORMATION TECHNOLOGY\n");
	printf("\t\t\t\tMENU");
	printf("\n-------------------------------------------------------------------------\n");
	printf("1. Enter student data\n");
	printf("2. Print marks card\n");
	printf("3. Print consolidated marks card\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&Choice);
	return(Choice);
}
//----------------------------------------------fnInputStudentData--------------------------------------------------------------
void fnInputStudentData()
{	
	int i;
	
	system("clear");
	
	printf("Enter the number of students in the college: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		printf("\nEnter the details of the %dth student\n",i);
		printf("Enter the register number: ");
		scanf("%d",&S[i].Regno);
		printf("Enter the student name: ");
		scanf("%s",S[i].Name);
		printf("Enter the marks in Digital Logic: ");
		scanf("%d",&S[i].Mk1);
		printf("Enter the marks in Statistics: ");
		scanf("%d",&S[i].Mk2);
		printf("Enter the marks in C Programming: ");
		scanf("%d",&S[i].Mk3);
		S[i].Total=S[i].Mk1+S[i].Mk2+S[i].Mk3;
		S[i].Avg=S[i].Total/3.0;
		if(S[i].Avg>=40 && S[i].Mk1>=35 && S[i].Mk2>=35 && S[i].Mk3>=35){
			if(S[i].Avg<=50){
				S[i].Result=3;
			}else if(S[i].Avg<=60){
				S[i].Result=2;
			}else if(S[i].Avg<=70){
				S[i].Result=1;
			}else{
				S[i].Result=0;
			}
		}else{
			S[i].Result=-1;
		}
	}
	
	system("clear");
}
//----------------------------------------------fnPrintMarksCard--------------------------------------------------------------
void fnPrintMarksCard()
{
	int RegNo,i,Found=0;
	
	system("clear");
	
	printf("Enter the register number of the student: ");
	scanf("%d",&RegNo);
	for(i=1;i<=N;i++){
		if(S[i].Regno==RegNo){
			Found=1;
			break;
		}
	}
	if(Found==1){
		printf("\n-------------------------------------------------------------------------\n");
		printf("\tST.ALOYSIUS INSTITUTE OF MANAGEMENT AND INFORMATION TECHNOLOGY\n\n");
		printf("\t\tSTUDENT REPORT");
		printf("\n-------------------------------------------------------------------------\n");
		printf("Register Number:%d",S[i].Regno);
		printf("\nName:\t\t%s",S[i].Name);
		printf("\nDigital Logic:\t%d",S[i].Mk1);
		printf("\nStatistics:\t%d",S[i].Mk2);
		printf("\nC Programming:\t%d",S[i].Mk3);
		printf("\nTOTAL MARKS:\t%d",S[i].Total);
		printf("\nAVERAGE:\t%.2f",S[i].Avg);
		if(S[i].Result==-1){
			printf("\nRESULT:\t\tFAIL");
		}else if(S[i].Result==0){
			printf("\nRESULT:\t\tDISTINCTION");
		}else if(S[i].Result==1){
			printf("\nRESULT:\t\tFIRST CLASS");
		}else if(S[i].Result==2){
			printf("\nRESULT:\t\tSECOND CLASS");
		}else{
			printf("\nRESULT:\t\tTHIRD CLASS");
		}
	}else{
		printf("Sorry! You have entered an invalid register number");
	}
}
//----------------------------------------------fnPrintClassReport--------------------------------------------------------------
void fnPrintClassReport()
{
	int i;
	
	system("clear");
	
	if(N!=0)
	{
		printf("\n---------------------------------------------------------------------------------\n");
		printf("\tST.ALOYSIUS INSTITUTE OF MANAGEMENT AND INFORMATION TECHNOLOGY\n");
		printf("\t\tCONSOLIDATED REPORTS");
		printf("\n---------------------------------------------------------------------------------\n");
		printf("RegNo\tName\tDigital Logic\tStatistics\tC programming\tTotal\tAverage\tResult\n");
		printf("-----------------------------------------------------------------------------------\n");
		for(i=1;i<=N;i++){
			printf("%d\t%s\t%d\t\t%d\t%\t%d\t\t%d\t%.2f\t",S[i].Regno,S[i].Name,S[i].Mk1,S[i].Mk2,S[i].Mk3,S[i].Total,S[i].Avg);
			if(S[i].Result==-1){
				printf("FAIL\n");
			}else if(S[i].Result==0){
				printf("DISTINCTION\n");
			}else if(S[i].Result==1){
				printf("FIRST CLASS\n");
			}else if(S[i].Result==2){
				printf("SECOND CLASS\n");
			}else{
				printf("THIRD CLASS\n");
			}
		}
	}else{
		printf("Sorry! No student records are available");
	}
}