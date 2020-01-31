/*----------------------------------------------------------------------------------------------------------------------------------------------------------
cone.c
Program to calculate the area and volume of a cone where
Area=pi*r*sqrt((r*r)+(h*h)) and Vol=(1/3)*pi*r*r*h
DIVYA RAJ K
22-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int R,H;
	float Area,Vol;
	
	system("clear");

	printf("Program to calculate the area and volume of a cone where\n");
	printf("Area=pi*r*sqrt((r*r)+(h*h)) and Vol=(1/3)*pi*r*r*h\n");
	printf("\nEnter the radius and height the cone:\n");
	scanf("%d%d",&R,&H);
	
	Area=(22.0/7)*R*sqrt((R*R)+(H*H));
	Vol=(1.0/3)*(22.0/7)*R*R*H;
	
	printf("\nThe area of the cone is: %.3f",Area);
	printf("\nThe volume of the cone is: %.3f",Vol);
}