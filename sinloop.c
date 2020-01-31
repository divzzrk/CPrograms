/*----------------------------------------------------------------------------------------------------------------------------------------------------------
sinloop.c
Program to calculate the sine of an angle in degrees by finding the sum of the series 
sin(x)=x-((x*x*x)/3!)+((x*x*x*x*x)/5!)-((x*x*x*x*x*x*x)/7!)+............
where x=((22.0/7)*Theta)/180.0
DIVYA RAJ K
07-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	int Theta,i=1;
	float SinX,X,pi,Sum;
	pi=22.0/7;
	
	system("clear");

	printf("Program to calculate the sine of a degree by finding the sum of the series sin(x)=x-((x*x*x)/3!)+((x*x*x*x*x)/5!)............\n\n");
	printf("Enter the degree:\n");
	scanf("%d",&Theta);
	
	X=pi*Theta/180.0;
	Sum=X;
	SinX=X;
	while(abs(Sum)>0.0001)
	{
		Sum=((-1)*Sum*pow(X,2))/((2*i+1)*(2*i));
		SinX=SinX+Sum;
		i++;
	}
	
	printf("\nThe sin(%d) = %f",Theta,SinX);
}