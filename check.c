/*---------------------------------------------------------------------------------------
check.c
Program to check whether a given digit is present in a number or not 
DIVYA RAJ.K
09-10-18
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
main()
{
	int Num,Ele,Flag=0,Rem;
	
	system("clear");
	
	printf("Program to check whether a given digit is present in a number or not\n");
	printf("Enter an integer: ");
	scanf("%d",&Num);
	//N=Num;
	printf("Enter a number: ");
	scanf("%d",&Ele);
	if(Ele>=10 || Ele<0){
		printf("Invalid digit!!");
	}else{
		while(Num!=0){
			Rem=Num%10;
			if(Ele==Rem){
				Flag=1;
				break;
			}
			Num=Num/10;
		}
		if(Flag==1){
			printf("The digit exists!!");
		}
		else{
			printf("Digit does not exist!!");
		}
	}
}