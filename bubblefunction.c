/*-------------------------------------------------------------------------------------------------------------------------------
BubbleFun.c
Program to sort n numbers in ascending order using bubble sort (Use user defined functions).
DIVYA RAJ K
25-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
//----------------------------------prototype---------------------------------------------
void fnInputArray(int N,int A[30]);
void fnBubbleSort(int N,int A[30]);
void fnPrintArray(int N,int A[30]);
main()
{
	int X[30],N,i,j,Temp;
	
	system("clear");

	printf("Program to sort n numbers in ascending order using bubble sort\n\n");
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	fnInputArray(N,X);
	fnBubbleSort(N,X);
	printf("\nThe entered numbers after sorting are:\n");
	fnPrintArray(N,X);
}
//----------------------------------fnInputArray---------------------------------------------
void fnInputArray(int N,int A[30])
{
	int i;
	printf("Enter %d numbers:\n",N);
	for(i=1;i<=N;i++){
		scanf("%d",&A[i]);
	}
}
//----------------------------------fnBubbleSort---------------------------------------------
void fnBubbleSort(int N,int A[30])
{
	int i,j,Temp;
	for(i=1;i<=(N-1);i++){
		for(j=1;j<=(N-i);j++){
			if(A[j]>A[j+1]){
				Temp=A[j];
				A[j]=A[j+1];
				A[j+1]=Temp;
			}
		}
	}
}
//----------------------------------fnPrintArray---------------------------------------------
void fnPrintArray(int N,int A[30])
{
	int i;
	for(i=1;i<=N;i++){
		printf("%d\t",A[i]);
	}
}