/*----------------------------------------------------------------------------------------------------------------------------------------------------------
FactSum.c
Program to calculate the sum of the series 
Sum=1!+2!+3!+......+n!
DIVYA RAJ K
18-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int Fact,N,I,Sum;
	
	system("clear");

	printf("Program to calculate the sum of the series:\nSum=1!+2!+3!+......+n!\n");
	printf("Enter a number:\t");
	scanf("%d",&N);
	printf("\nThe sum of the series\nSum= ",N);
	Fact=1;
	I=1;
	
	while(I<=N){
		Fact=Fact*I;
		if(I!=N)
			printf("%d! + ",I);
		else
			printf("%d!",I);
		Sum=Sum+Fact;
		I=I+1;
	}
	
	printf(" = %d",Sum);
}