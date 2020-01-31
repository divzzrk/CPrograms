/*--------------------------------------------------------------------------------------------------------------------------------------------------------
Slope.c
Program to calculate the distance and slope of a line given two points (X1,Y1) and (X2,Y2) where,
Distance,D=sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1)))
Slope,M=(Y2-Y1)/(X2-X1)
DIVYA RAJ K
22-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int X1,X2,Y1,Y2;
	float D,M;
	
	system("clear");

	printf("Program to calculate the distance and slope of a line given two points (X1,Y1) and (X2,Y2), where\n\n");
	printf("Distance,D=sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1)))\nSlope,M=(Y2-Y1)/(X2-X1)\n");
	printf("\nEnter the X and Y coordinates of point 1:\n");
	scanf("%d%d",&X1,&Y1);
	printf("\nEnter the X and Y coordinates of point 2:\n");
	scanf("%d%d",&X2,&Y2);
	
	D=sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1)));
	M=(Y2-Y1)/(X2-X1);
	
	printf("\nThe distance and slope of line given points: (%d,%d) and (%d,%d) are",X1,Y1,X2,Y2);
	printf("\nThe distance = %.2f",D);
	printf("\nThe slope = %.2f",M);
}