/*-------------------------------------------------------------------------------------------------------------------------------
bintodec.c
Program to convert a binary number to decimal number
DIVYA RAJ K
22-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int Num=0,N,Rem,i=0,flag=0;
	long int Binary=0;
	
	system("clear");

	printf("Program to convert a binary number to a decimal number\n\n");
	printf("Enter an binary number: ");
	scanf("%d",&Binary);
	N=Binary;
	while(Binary>=1){
		Rem=Binary%10;
		if(Rem!=0 && Rem!=1){
			flag=1;
			break;
		}
		Num=Num+(Rem*pow(2,i));
		Binary=Binary/10;
		i++;
	}
	if(flag==0)
		printf("\nThe decimal equivalent of the binary number %d is %ld",N,Num);
	else
		printf("\nYou have entered an invalid binary number!!!");
}