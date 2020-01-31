/*----------------------------------------------------------------------------------------------------------------------------------------------------------
maxmin.c
Program to calculate the maximum and minimum of three numbers
DIVYA RAJ K
22-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int A,B,C;
	
	system("clear");

	printf("Program to calculate the maximum and minimum of three numbers\n");
	printf("\nEnter three numbers:\n");
	scanf("%d%d%d",&A,&B,&C);
	
	if(A>B && A>C){
		printf("\nMaximum number is: %d\n",A);
		if(B>C){
			printf("Minimum number is: %d",C);
		}else{
			printf("Minimum number is: %d",B);
		}
	}else if(B>C){
		printf("\nMaximum number is: %d\n",B);
		if(A>C){
			printf("Minimum number is: %d",C);
		}else{
			printf("Minimum number is: %d",A);
		}
	}else{
		printf("\nMaximum number is: %d\n",C);
		if(B>A){
			printf("Minimum number is: %d",A);
		}else{
			printf("Minimum number is: %d",B);
		}
	}
}