/*-------------------------------------------------------------------------------------------------------------------------------
StringFunctions.c
Program to perform string functions
DIVYA RAJ K
11-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int fnStrlen(char S[20]);
void fncpstr(char S[20],char T[20]);
int fncmpstr(char S[20],char T[20]);
void fnstrjoin(char T[20],char S[20]);
main()
{
	char S[20],T[20];
	int len,cmp;
	system("clear");
	printf("1.To find the length of the string\nEnter a string: ");
	scanf("%s",S);
	len=fnStrlen(S);
	printf("\nThe length of the string = %d",len);
	printf("\n\n2.To copy one string to another string\nEnter a string: ");
	scanf("%s",S);
	fncpstr(S,T);
	printf("\nSource = %s\nTarget = %s",S,T);
	printf("\n\n3.To compare two strings\nEnter 2 strings: ");
	scanf("%s",S);
	scanf("%s",T);
	cmp=fncmpstr(S,T);
	if(cmp==0)
		printf("\nTwo strings are equal!");
	else if(cmp<0)
		printf("\nString 1 is small");
	else
		printf("\nString 2 is small");
	printf("\n\n4.To join two strings\nEnter 2 strings: ");
	scanf("%s",T);
	scanf("%s",S);
	fnstrjoin(T,S);
	printf("\nResultant string = %s",T);
}
int fnStrlen(char S[20])
{
	int i=0;
	while(S[i]!='\0'){
		i++;
	}
	return i;
}
void fncpstr(char S[20],char T[20])
{
	int i=0;
	while(S[i]!='\0'){
		T[i]=S[i];
		i++;
	}
	T[i]='\0';
}
int fncmpstr(char S[20],char T[20])
{
	int i=0;
	while(S[i]==T[i]){
		if(S[i]=='\0'){
			return 0;
		}
		i++;
	}
	return S[i]-T[i];
}
void fnstrjoin(char T[20],char S[20])
{
	int i=0,j=0;
	while(T[i]!='\0'){
		i++;
	}
	while(S[j]!='\0'){
		T[i]=S[j];
		i++;
		j++;
	}
	T[i]='\0';
}