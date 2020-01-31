/*----------------------------------------------------------------------------------------------------------------------------------------------------------
DaysConvert.c
Program to convert days into years, months and days
DIVYA RAJ K
09-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int Days,Years,Months,NumDays;
	
	system("clear");

	printf("Program to convert days into years, months and days\n\n");
	printf("Enter the total number of days:\n");
	scanf("%d",&Days);
	
	NumDays=Days;
	Years=Days/365;
	Days=Days%365;
	Months=Days/30;
	Days=Days%30;
	
	printf("\n%d days = %d years %d months and %d days",NumDays,Years,Months,Days);
}