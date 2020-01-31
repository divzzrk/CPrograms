/*-------------------------------------------------------------------------------------------------------------------------------
fib.c
Program to print the Fibonacci series
0 1 1 2 3 5 8 .....
up to n terms
DIVYA RAJ K
22-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int X[30],N,X1=-1,X2=1,X3,i;
	
	system("clear");

	printf("Program to print the Fibonacci series 0 1 1 2 3 ... upto n terms\n\n");
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	if(N<0){
		printf("\nSorry! You have entered a wrong term");
	}
	else if(N==0){
		printf("\nThere is no elements in the Fibonacci series!");
	}
	else{
		for(i=1;i<=N;i++){
			X3=X1+X2;
			printf("%d\t",X3);
			X1=X2;
			X2=X3;
		}
	}
}