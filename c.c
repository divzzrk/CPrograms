/*---------------------------------------------------------------------------------------
ComplexNums.c
Menu driven program to define a structure Complex to find sum and product of complex numbers. 
DIVYA RAJ.K
16-10-18
-----------------------------------------------------------------------------------------*/
#include<stdio.h>

typedef struct ComplexType{
	float Real;
	float Imag;
}COMPLEX;
//----------------------------------function prototype---------------------------------------------
void fnInputComplex(COMPLEX *C);
void fnPrintComplex(COMPLEX C);
COMPLEX fnAddComplexNumbers(COMPLEX C1,COMPLEX C2);
COMPLEX fnProdComplexNumbers(COMPLEX C1,COMPLEX C2);

main()
{
	COMPLEX X,Y,Z;
	int ch;
	
	system("clear");
	
	printf("Menu driven program to define a structure Complex\n\n");
	ch=1;
	while(ch!=4){
		printf("MENU\n\n1.Input complex numbers\n");
		printf("2.Add complex numbers\n");
		printf("3.Multiply complex numbers\n");
		printf("4.Exit\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:	printf("Enter the real and imaginary part of first complex number: ");
					fnInputComplex(&X);
					printf("Enter the real and imaginary part of second complex number: ");
					fnInputComplex(&Y);
					printf("\nComplex Number 1\n");
					fnPrintComplex(X);
					printf("\nComplex Number 2\n");
					fnPrintComplex(Y);
					break;
			case 2:	Z=fnAddComplexNumbers(X,Y);
					printf("\nThe sum is: ");
					fnPrintComplex(Z);
					break;
			case 3:	Z=fnProdComplexNumbers(X,Y);
					printf("\nThe product is: ");
					fnPrintComplex(Z);
					break;
			case 4:	break;
		}
	}
}

void fnInputComplex(COMPLEX *C)
{
	scanf("%f",&(C->Real));
	scanf("%f",&(C->Imag));
}
void fnPrintComplex(COMPLEX C)
{
	printf("%5.2f",C.Real);
	if(C.Imag<0)
		printf("-%5.2f i\n",C.Imag);
	else
		printf("+%5.2f i\n",C.Imag);
}
COMPLEX fnAddComplexNumbers(COMPLEX C1,COMPLEX C2)
{
	COMPLEX Z;
	Z.Real=C1.Real+C2.Real;
	Z.Imag=C1.Imag+C2.Imag;
	return Z;
}
COMPLEX fnProdComplexNumbers(COMPLEX C1,COMPLEX C2)
{
	COMPLEX Z;
	Z.Real=C1.Real*C2.Real-C1.Imag*C2.Imag;
	Z.Imag=C1.Real*C2.Imag+C1.Imag*C2.Real;
	return Z;
}