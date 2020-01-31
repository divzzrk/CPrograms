/*----------------------------------------------------------------------------------------------------------------------------------------------------------
Fact.c
Program to calculate the factorial of a number
DIVYA RAJ K
18-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int Fact,N,I;
	
	system("clear");

	printf("Program to calculate the factorial of a number\n");
	printf("Enter a number:\t");
	scanf("%d",&N);
	Fact=1;
	I=1;
	
	while(I<=N){
		Fact=Fact*I;
		I=I+1;
	}
	
	printf("\n%d! = %d",N,Fact);
}