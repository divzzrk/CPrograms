/*---------------------------------------------------------------------------------------
sumarray.c
Program to find the sum of all digits of each element of an array of N elements 
DIVYA RAJ.K
12-10-18
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
main()
{
	int X[20],Y[20],Num,Ele,Sum,Rem,N,i;
	
	system("clear");
	
	printf("Program to find the sum of all digits of each element of an array of N elements\n");
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	printf("Enter %d elements:\n",Num);
	for(i=1;i<=N;i++)
		scanf("%d",&X[i]);
	for(i=1;i<=N;i++){
		Sum=0;
		Num=X[i];
		while(Num!=0){
			Rem=Num%10;
			Sum=Sum+Rem;
			Num=Num/10;
		}
		Y[i]=Sum;
	}
	printf("\nThe sum of all digits of each element of an array of N elements:\n"); 
	for(i=1;i<=N;i++)
		printf("\n%d",Y[i]);	
}