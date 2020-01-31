/*----------------------------------------------------------------------------------------------------------------------------------------------------------
electricity.c
Program to read customer number and power consumed and print the amount to be paid by the customer based on the following criteria:
------------------------------------------------------------------------------------------------------------------------------------------------------------
CONSUMPTION UNITS		RATE OF CHARGE
------------------------------------------------------------------------------------------------------------------------------------------------------------
0-200					Rs. 0.50 per unit
201-400					Rs. 100 plus Rs. 0.65 per unit excess 200
401-600					Rs. 230 plus Rs. 0.80 per unit excess 400
------------------------------------------------------------------------------------------------------------------------------------------------------------
DIVYA RAJ K
22-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int Units,CusNo;
	float Amount;
	
	system("clear");

	printf("Program to calculate the amount to be paid by a customer based on units consumed\n");
	printf("\nEnter the customer number:\t");
	scanf("%d",&CusNo);
	printf("Enter the units consumed:\t");
	scanf("%d",&Units);
	
	if(Units>=0 && Units<=200){
		Amount=Units*0.50;
	}else if(Units>=201 && Units<=400){
		Amount=100+((Units-200)*0.65);
	}else if(Units>=400 && Units<=600){
		Amount=230+((Units-400)*0.80);
	}else{
		printf("Invalid units!!");
	}
	
	printf("\nCustomer Number:\t%d",CusNo);
	printf("\nUnits consumed:\t\t%d",Units);
	printf("\nThe amount to be paid:\t%.2f",Amount);
}