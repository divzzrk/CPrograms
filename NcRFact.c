/*---------------------------------------------------------------------------------------
NcrFact.c
Program to find NcR by writing a recursive function subprogram to calculate the factorial of a number.
DIVYA RAJ.K
16-10-18
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
//----------------------------------function prototype---------------------------------------------
long fnFact(int N);

main()
{
	int N,R,NFact,RFact,NRFact;
	long int NcR;
	
	system("clear");
	
	printf("Program to find NcR by writing a recursive function subprogram to calculate the factorial of a number\n\n");
	printf("Enter the value of N: ");
	scanf("%d",&N);
	printf("Enter the value of R: ");
	scanf("%d",&R);
	if(N>=R){
		NFact=fnFact(N);
		RFact=fnFact(R);
		NRFact=fnFact(N-R);
		NcR=NFact/(NRFact*RFact);
		printf("\n%dC%d = %ld",N,R,NcR);
	}else{
		printf("Sorry! N value should be greater than or equal to R");
	}
}
long fnFact(int N)
{
	int i,Fact;
	Fact=1;
	for(i=1;i<=N;i++){
		Fact=Fact*i;
	}
	return Fact;
}