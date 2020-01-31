/*---------------------------------------------------------------------------------------
SumNum.c
Program to find the sum of digit in a number
DIVYA RAJ.K
09-10-18
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
main()
{
	int Num,Sum=0,Rem,N;
	
	system("clear");
	
	printf("Program to find the maximum digit in a number\n");
	printf("Enter an integer: ");
	scanf("%d",&Num);
	N=Num;
	while(Num!=0){
		Rem=Num%10;
		Sum=Sum+Rem;
		Num=Num/10;
	}
	
	printf("\nThe sum of digits in the number %d is %d",N,Sum);
}