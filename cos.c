/*----------------------------------------------------------------------------------------------------------------------------------------------------------
Cos.c
Program to calculate the cosine of a degree by finding the sum of the series
cos(x)=1-((x*x)/2!)+((x*x*x*x)/4!)-((x*x*x*x*x*x)/6!)+((x*x*x*x*x*x*x*x)/8!)
where x=((22.0/7)*Theta)/180.0
DIVYA RAJ K
07-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int Theta;
	float CosX,X,T1,T2,T3,T4,T5;
	
	system("clear");

	printf("Program to calculate the cosine of a degree by finding the sum of the series\ncos(x)=1-((x*x)/2!)+((x*x*x*x)/4!)-((x*x*x*x*x*x)/6!)+((x*x*x*x*x*x*x*x)/8!)\nwhere x=((22.0/7)*Theta)/180.0\n\n");
	printf("Enter the degree:\n");
	scanf("%d",&Theta);
	
	X=((22.0/7)*Theta)/180.0;
	T1=1;
	T2=(T1*X*X)/(1*2);
	T3=(T2*X*X)/(3*4);
	T4=(T3*X*X)/(5*6);
	T5=(T4*X*X)/(7*8);
	CosX=T1-T2+T3-T4+T5;
	
	printf("\nThe cos(%d) = %.2f",Theta,CosX);
}