/*-------------------------------------------------------------------------------------------------------------------------------
BubbleNames.c
Program to sort n names in ascending order using bubble sort.
DIVYA RAJ K
25-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
//----------------------------------prototype---------------------------------------------
void fnInputString(int N,char Names[20][30]);
void fnBubbleSort(int N,char Names[20][30]);
void fnPrintString(int N,char Names[20][30]);
main()
{
	char Names[20][30],Temp[20];
	int N,i,j;
	
	system("clear");

	printf("Program to sort n names in ascending order using bubble sort\n\n");
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	printf("Enter %d names:\n",N);
	fnInputString(N,Names);
	fnBubbleSort(N,Names);
	printf("\nThe entered names after sorting are:\n");
	fnPrintString(N,Names);
}
//----------------------------------fnInputString---------------------------------------------
void fnInputString(int N,char Names[20][30])
{
	int i;
	for(i=1;i<=N;i++){
		scanf("%s",Names[i]);
	}
}
//----------------------------------fnBubbleSort---------------------------------------------
void fnBubbleSort(int N,char Names[20][30])
{
	char Temp[20];
	int i,j;
	for(i=1;i<=(N-1);i++){
		for(j=1;j<=(N-i);j++){
			if(strcmp(Names[j],Names[j+1])>0){
				strcpy(Temp,Names[j]);
				strcpy(Names[j],Names[j+1]);
				strcpy(Names[j+1],Temp);
			}
		}
	}
}
//----------------------------------fnPrintString---------------------------------------------
void fnPrintString(int N,char Names[20][30])
{
	int i;
	for(i=1;i<=N;i++){
		printf("%s\n",Names[i]);
	}
}