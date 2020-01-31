/*-------------------------------------------------------------------------------------------------------------------------------
stdStruct.c
Program to print student data using structures
DIVYA RAJ K
09-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct StudentType{
	int Regno;
	char Name[30];
	int Mk1;
	int Mk2;
	int Mk3;
	int Total;
	float Avg;
	int Result;
};
struct StudentType S;
main()
{
	system("clear");

	printf("Program to print student marks card using structures\n\n");
	printf("Enter the register number: ");
	scanf("%d",&S.Regno);
	printf("Enter the student name: ");
	scanf("%s",S.Name);
	printf("Enter the marks in Physics: ");
	scanf("%d",&S.Mk1);
	printf("Enter the marks in Chemistry: ");
	scanf("%d",&S.Mk2);
	printf("Enter the marks in Maths: ");
	scanf("%d",&S.Mk3);
	system("clear");
	S.Total=S.Mk1+S.Mk2+S.Mk3;
	S.Avg=S.Total/3.0;
	if(S.Avg>=40 && S.Mk1>=35 && S.Mk2>=35 && S.Mk3>=35){
		if(S.Avg<=50){
			S.Result=3;
		}else if(S.Avg<=60){
			S.Result=2;
		}else if(S.Avg<=70){
			S.Result=1;
		}else{
			S.Result=0;
		}
	}else{
		S.Result=-1;
	}
	
	
	printf("\n-------------------------------------------------------------------------\n");
	printf("\tST.ALOYSIUS COLLEGE RESULTS\n");
	printf("\t\tSTUDENT REPORT");
	printf("\n-------------------------------------------------------------------------\n");
	printf("Register Number:%d",S.Regno);
	printf("\nName:\t\t%s",S.Name);
	printf("\nPhysics:\t%d",S.Mk1);
	printf("\nChemistry:\t%d",S.Mk2);
	printf("\nMaths:\t\t%d",S.Mk3);
	printf("\nTOTAL MARKS:\t%d",S.Total);
	printf("\nAVERAGE:\t%.2f",S.Avg);
	if(S.Result==-1){
		printf("\nRESULT:\t\tFAIL");
	}else if(S.Result==0){
		printf("\nRESULT:\t\tDISTINCTION");
	}else if(S.Result==1){
		printf("\nRESULT:\t\tFIRST CLASS");
	}else if(S.Result==2){
		printf("\nRESULT:\t\tSECOND CLASS");
	}else{
		printf("\nRESULT:\t\tTHIRD CLASS");
	}
}