/*----------------------------------------------------------------------------------------------------------------------------------------------------------
FactMulSum.c
Program to calculate the sum of the series 
Sum=(1!*2!)+(2!*3!)+(3!*4!)+......+((n-1)!*n!)
DIVYA RAJ K
18-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int Fact,N,I,Sum;
	
	system("clear");

	printf("Program to calculate the sum of the series:\nSum=(1!*2!)+(2!*3!)+(3!*4!)+......+((n-1)!*n!)\n");
	printf("Enter a number:\t");
	scanf("%d",&N);
	printf("\nThe sum of the series\nSum= ",N);
	Fact=1;
	I=1;
	Sum=0;
	
	while(I<N){
		Fact=Fact*I;
		if(I<(N-1))
			printf("(%d! * %d!) + ",I,(I+1));
		else
			printf("(%d! * %d!)",I,I+1);
		Sum=Sum+(Fact*(Fact*(I+1)));
		I=I+1;
	}
	
	printf(" = %d",Sum);
}