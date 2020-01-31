/*-------------------------------------------------------------------------------------------------------------------------------
strinsert.c
Program to insert a string into another 
DIVYA RAJ K
11-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
void strinsert(int N,char S[20],char T[20],char U[20]);
main()
{
	char S[20],T[20],U[20];
	int N;
	system("clear");
	printf("Enter a string: ");
	scanf("%s",S);
	printf("\nEnter the second string which you have to insert into string 1: ");
	scanf("%s",T);
	printf("\nEnter the location:");
	scanf("%d",&N);
	strinsert(N,S,T,U);
	printf("\nThe string after inserting: %s",U);
}
void strinsert(int N,char S[20],char T[20],char U[20])
{
	
	int i=0,j=0,a,b,slen,tlen;
	while(S[i]!='\0')
	{
		i++;
	}
	while(T[j]!='\0')
	{
		j++;
	}
	slen=i;
	tlen=j;
	a=0;
	b=0;
	while(a<=slen){
		U[a]=S[a];
		a++;
	}
	while(b<=tlen){
		U[a]=T[j];
		a++;
		j++;
		b++;
	}
	while(S[N]!='\0'){
		U[a]=S[N];
		a++;
		N++;
	}
}