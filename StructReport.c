/*-------------------------------------------------------------------------------------------------------------------------------
StructReport.c
Program to print the consolidated marks card of a college
DIVYA RAJ K
09-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
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
main()
{
	int N,i;
	
	system("clear");

	printf("Program to print the consolidated marks card of a college\n\n");
	printf("Enter the number of students in the college: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		printf("\nEnter the details of the %dth student\n",i);
		printf("Enter the register number: ");
		scanf("%d",&S[i].Regno);
		printf("Enter the student name: ");
		scanf("%s",S[i].Name);
		printf("Enter the marks in Maths: ");
		scanf("%d",&S[i].Mk1);
		printf("Enter the marks in English: ");
		scanf("%d",&S[i].Mk2);
		printf("Enter the marks in Computer: ");
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
	
	printf("\n-------------------------------------------------------------------------\n");
	printf("\tST.ALOYSIUS COLLEGE (AUTONOMOUS)\n");
	printf("\t\tCONSOLIDATED REPORTS");
	printf("\n-------------------------------------------------------------------------\n");
	printf("RegNo\tName\tMaths\tEnglish\tComputer\tTotal\tAverage\tResult\n");
	printf("-------------------------------------------------------------------------\n");
	for(i=1;i<=N;i++){
		printf("%d\t%s\t%d\t%d\t%d\t\t%d\t%.2f\t",S[i].Regno,S[i].Name,S[i].Mk1,S[i].Mk2,S[i].Mk3,S[i].Total,S[i].Avg);
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
}