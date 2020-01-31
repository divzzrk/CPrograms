/*----------------------------------------------------------------------------------------------------------------------------------------------------------
SwapWithoutTemp.c
Program to swap two numbers without using a third variable
DIVYA RAJ K
09-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int A,B;
	
	system("clear");

	printf("Program to swap two numbers without using a third variable\n\n");
	printf("Enter two numbers:\n");
	scanf("%d%d",&A,&B);
	printf("\nBefore swapping\nA=%d and B=%d",A,B);
	
	A=A+B;
	B=A-B;
	A=A-B;
	
	printf("\n\nAfter swapping\nA=%d and B=%d",A,B);
}