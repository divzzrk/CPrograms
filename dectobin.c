/*-------------------------------------------------------------------------------------------------------------------------------
dectobin.c
Program to convert an integer number to a binary number
DIVYA RAJ K
22-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
int main()
{
	int Num,N,Rem,i=0;
	long int Binary=0;
	
	//system("clear");

	printf("Program to convert an integer number to a binary number\n\n");
	printf("Enter an integer number: ");
	scanf("%d",&Num);
	N=Num;
	while(Num>=1){
		Rem=Num%2;
		Binary=Rem*pow(10,i)+Binary;
		Num=Num/2;
		i++;
	}
	printf("\nThe binary equivalent of the decimal number %d is %ld",N,Binary);
	return 0;
}