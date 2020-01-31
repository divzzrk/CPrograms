/*-------------------------------------------------------------------------------------------------------------------------------
Swappoint.c
Program to swap two numbers
DIVYA RAJ K
11-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
void fnSwap(int *a,int *b);
main()
{
	int a,b;
	
	system("clear");
	
	printf("Program to swap two numbers using functions\n\n");
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping: a = %d and b = %d",a,b);
	fnSwap(&a,&b);
	printf("\nAfter swapping: a = %d and b = %d",a,b);
}
void fnSwap(int *a,int *b)
{
	int Temp;
	Temp=*a;
	*a=*b;
	*b=Temp;
}