/*---------------------------------------------------------------------------------------
MaxNum.c
Program to find the maximum digit in a number
DIVYA RAJ.K
09-10-18
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
main()
{
	int Num,Max=0,Rem,N;
	
	system("clear");
	
	printf("Program to find the maximum digit in a number\n");
	printf("Enter an integer: ");
	scanf("%d",&Num);
	N=Num;
	while(Num!=0){
		Rem=Num%10;
		if(Max<Rem){
			Max=Rem;
		}
		Num=Num/10;
	}
	
	printf("\nThe maximum digit in the number %d is %d",N,Max);
}