/*----------------------------------------------------------------------------------------------------------------------------------------------------------
prism.c
Program to calculate the area and volume of a prism where
Area=lwh and Vol=2lw+2lh+2wh
DIVYA RAJ K
22-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int L,W,H;
	float Area,Vol;
	
	system("clear");

	printf("Program to calculate the area and volume of a prism where\n");
	printf("Area=lwh and Vol=2lw+2lh+2wh\n");
	printf("\nEnter the length, width and height the prism:\n");
	scanf("%d%d%d",&L,&W,&H);
	
	Area=L*W*H;
	Vol=(2*L*W)+(2*L*H)+(2*W*H);
	
	printf("\nThe area of the prism is: %.3f",Area);
	printf("\nThe volume of the prism is: %.3f",Vol);
}