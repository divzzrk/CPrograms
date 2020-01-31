/*----------------------------------------------------------------------------------------------------------------------------------------------------------
swap.c
Program to swap two numbers using a third variable
DIVYA RAJ K
09-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int A,B,Temp;
	
	system("clear");

	printf("Program to swap two numbers using a third variable\n\n");
	printf("Enter two numbers:\n");
	scanf("%d%d",&A,&B);
	printf("\nBefore swapping\nA=%d and B=%d",A,B);
	
	Temp=A;
	A=B;
	B=Temp;
	
	printf("\n\nAfter swapping\nA=%d and B=%d",A,B);
}