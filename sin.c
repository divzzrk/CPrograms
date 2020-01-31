/*----------------------------------------------------------------------------------------------------------------------------------------------------------
Sin.c
Program to calculate the sine of a degree by finding the sum of the series 
sin(x)=x-((x*x*x)/3!)+((x*x*x*x*x)/5!)-((x*x*x*x*x*x*x)/7!)+((x*x*x*x*x*x*x*x*x)/9!)
where x=((22.0/7)*Theta)/180.0
DIVYA RAJ K
07-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int Theta;
	float SinX,X,T1,T2,T3,T4,T5,pi;
	pi=22.0/7;
	
	system("clear");

	printf("Program to calculate the sine of a degree by finding the sum of the series\nsin(x)=x-((x*x*x)/3!)+((x*x*x*x*x)/5!)-((x*x*x*x*x*x*x)/7!)+((x*x*x*x*x*x*x*x*x)/9!)\nwhere x=((22.0/7)*Theta)/180.0\n\n");
	printf("Enter the degree:\n");
	scanf("%d",&Theta);
	
	X=(pi*Theta)/180.0;
	T1=X;
	T2=(T1*X*X)/(2*3);
	T3=(T2*X*X)/(4*5);
	T4=(T3*X*X)/(6*7);
	T5=(T4*X*X)/(8*9);
	SinX=T1-T2+T3-T4+T5;
	
	printf("\nThe sin(%d) = %.2f",Theta,SinX);
}