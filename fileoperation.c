/*----------------------------------------------------------------------------------------------
studentInfo.c
Program to perform file operation
DIVYA RAJ K
11-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
typedef struct studentType
{
	int SID;
	char Name[30];
	int Marks[4];
	float avg;
	int Result;
}STUDENT;
STUDENT S;
main()
{
	int i,j,n,Total,RecNo;
	FILE *fp;
	float avg;
	
	system("clear");
	
	if((fp=fopen("students.dat","w+"))==NULL){
		printf("Cannot create file!!");
		exit(1);
	}
	printf("STUDENT INFORMATION SYSTEM\n");
	printf("\nEnter the number of students: ");
	scanf("%d",&n);
	printf("\nEnter SID, Name and Marks in 3 subjects of %d numbers:\n ",n);
	for(i=1;i<=n;i++){
			scanf("%d",&a);
			fprintf(fp,"%d\t",a);
		}
		//exit(1);
	}else{
		printf("File is not created");
	}
	fclose(fp);
	if((fp=fopen("1Mca","r"))==NULL){
		printf("\nFile is not found!");
	}else{
		printf("The contents of the file are:\n");
		for(i=1;i<=n;i++){
			fscanf(fp,"%d",&X[i]);
		}
		for(i=1;i<=n;i++){
			printf("%d\t",X[i]);
		}
		exit(1);
	}
	fclose(fp);
	
}