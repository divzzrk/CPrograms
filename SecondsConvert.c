/*----------------------------------------------------------------------------------------------------------------------------------------------------------
SecondsConvert.c
Program to convert seconds into hours, minutes and seconds
DIVYA RAJ K
09-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int Hours,Minutes,Seconds,TotalSeconds;
	
	system("clear");

	printf("Program to convert seconds into hours, minutes and seconds\n\n");
	printf("Enter the total number of seconds:\n");
	scanf("%d",&Seconds);
	
	TotalSeconds=Seconds;
	Hours=Seconds/3600;
	Seconds=Seconds%3600;
	Minutes=Seconds/60;
	Seconds=Seconds%60;
	
	printf("\n%d seconds = %d hours %d minutes and %d seconds",TotalSeconds,Hours,Minutes,Seconds);
}