/*----------------------------------------------------------------------------------------------------------------------------------------------------------
sphere.c
Program to calculate the area of a sphere
DIVYA RAJ K
07-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int R;
	float Vol,pi;
	pi=22.0/7;
	
	system("clear");

	printf("Program to calculate the area of a sphere\n\n");
	printf("Enter the radius of the sphere:\n");
	scanf("%d",&R);
	
	Vol=(4/3.0)*pi*pow(R,3);
	
	printf("\nThe area of the sphere is: %f",Vol);
}