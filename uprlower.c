/*-------------------------------------------------------------------------------------------------------------------------------
uprlower.c
Program to convert a string to upper and lower case
DIVYA RAJ K
11-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
void fnstrupr(char S[20]);
void fnstrlwr(char S[20]);
main()
{
	char S[20];
	system("clear");
	printf("Enter a string: ");
	scanf("%s",S);
	fnstrupr(S);
	printf("\nThe string after converting to upper case: %s",S);
	fnstrlwr(S);
	printf("\nThe string after converting to lower case: %s",S);
}
void fnstrupr(char S[20])
{
	int i=0;
	while(S[i]!='\0')
	{
		if(S[i]>='a' && S[i]<='z'){
			S[i]=S[i]-32;
		}
		i++;
	}
}
void fnstrlwr(char S[20])
{
	int i=0;
	while(S[i]!='\0')
	{
		if(S[i]>='A' && S[i]<='Z'){
			S[i]=S[i]+32;
		}
		i++;
	}
}