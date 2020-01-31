/*----------------------------------------------------------------------------------------------------------------------------------------------------------
cylinder.c
Program to calculate the area and volume of a cylinder where
Area=2*pi*r*h and Vol=pi*r*r*h
DIVYA RAJ K
22-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int R,H;
	float Area,Vol;
	
	system("clear");

	printf("Program to calculate the area and volume of a cylinder where\n");
	printf("Area=2*pi*r*h and Vol=pi*r*r*h\n");
	printf("\nEnter the radius and height the cylinder:\n");
	scanf("%d%d",&R,&H);
	
	Area=2*(22.0/7)*R*H;
	Vol=(22.0/7)*R*R*H;
	
	printf("\nThe area of the cylinder is: %.3f",Area);
	printf("\nThe volume of the cylinder is: %.3f",Vol);
}