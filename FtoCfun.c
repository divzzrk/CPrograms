/*---------------------------------------------------------------------------------------
FtoCfun.c
Program to convert temperature in celsius to fahrenheit from 0 to 5 for every 5 degrees
DIVYA RAJ.K
16-10-18
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
//----------------------------------prototype---------------------------------------------
float fnFtoC(int C);
main()
{
	int C;
	float F;
	
	system("clear");
	
	printf("Program to convert temperature in celsius to fahrenheit from 0 to 5 for every 5 degrees\n");
	C=0;
	printf("\n----------------------------------------------------------------------------------------\n");
	printf("Centigrade\t\tFahrenheit\n");
	printf("----------------------------------------------------------------------------------------\n\n");
	while(C<=100){
		F=fnFtoC(C);
		printf("%dC\t\t\t%.2fF\n",C,F);
		C=C+5;
	}
	printf("----------------------------------------------------------------------------------------");
}

//----------------------------------fnFtoC---------------------------------------------
float fnFtoC(int C)
{
	float F;
	F=(9.0/5)*C+32;
	return F;
}
		