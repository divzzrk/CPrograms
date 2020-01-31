/*----------------------------------------------------------------------------------------------------------------------------------------------------------
SumEven.c
Program to calculate the sum of first n even natural numbers 
DIVYA RAJ K
18-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int I,T,S,N;
	
	system("clear");

	printf("Program to calculate the sum of first n even natural numbers\n");
	printf("Enter the value of n:\t");
	scanf("%d",&N);
		
	
	T=2;
	I=1;
	S=0;
	while(I<=N){
		if(I!=N){
			printf("%d + ",T);
		}else{
			printf("%d ",T);
		}
		S=S+T;
		T=T+2;
		I=I+1;
	}
	
	printf(" = %d",S);
}