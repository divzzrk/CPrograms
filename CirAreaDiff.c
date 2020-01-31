/*----------------------------------------------------------------------------------------------------------------------------------------------------------
CirAreaDiff.c
Program to calculate the annual area not covered by a smaller area inside a bigger circle
DIVYA RAJ K
07-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	float CArea1,CArea2,R1,R2,pi,AreaDiff;
	pi=22.0/7;
	
	system("clear");

	printf("Program to calculate the annual area not covered by a smaller area inside a bigger circle\n\n");
	printf("Enter the radius of the bigger circle: ");
	scanf("%f",&R1);
	printf("Enter the radius of the smaller circle: ");
	scanf("%f",&R2);
	
	CArea1=pi*R1*R1;
	CArea2=pi*R2*R2;
	AreaDiff=CArea1-CArea2;
	
	printf("\nThe annual area not covered by a smaller area inside a bigger circle is: %f",AreaDiff);
}