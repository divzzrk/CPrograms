/*-------------------------------------------------------------------------------------------------------------------------------
StringPointer.c
Program to find the length of the string,duplicate, to join and compare the two strings
DIVYA RAJ K
25-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//----------------------------------prototype---------------------------------------------
int fnStrLen(char *s);
void fnStrCopy(char *t,char *s);
void fnStrJoin(char *s,char *t);
int fnStrCmp(char *s,char *t);
main()
{
	char *str1,*str2;
	int L1,L2,Comp;
	str1=(char *)malloc(60);
	str2=(char *)malloc(60);
	
	system("clear");

	printf("Program to find the length of the string,duplicate, to join and compare the two strings\n");
	printf("Enter the two strings:\n ");
	gets(str1);
	gets(str2);
	L1=fnStrLen(str1);
	L2=fnStrLen(str1);
	printf("The two strings are:\n");
	puts(str1);
	printf("\n");
	puts(str2);
	printf("\nThe length of string 1 is %d\n",L1);
	printf("\nThe length of string 2 is %d\n",L2);
	fnStrJoin(str1,str2);
	printf("\nAfter joining the two strings\n");
	puts(str1);
	printf("Enter the two strings to copy:\n ");
	gets(str1);
	gets(str2);
	fnStrCopy(str1,str2);
	printf("\nAfter copying the contents: str1 = ");
	puts(str1);
	printf(" and str2 = ");
	puts(str2);
	Comp=fnStrCmp(str1,str2);
	
}
//----------------------------------fnInputString---------------------------------------------
void fnInputString(int N,char Names[20][30])
{
	int i;
	for(i=1;i<=N;i++){
		scanf("%s",Names[i]);
	}
}
//----------------------------------fnBubbleSort---------------------------------------------
void fnBubbleSort(int N,char Names[20][30])
{
	char Temp[20];
	int i,j;
	for(i=1;i<=(N-1);i++){
		for(j=1;j<=(N-i);j++){
			if(strcmp(Names[j],Names[j+1])>0){
				strcpy(Temp,Names[j]);
				strcpy(Names[j],Names[j+1]);
				strcpy(Names[j+1],Temp);
			}
		}
	}
}
//----------------------------------fnPrintString---------------------------------------------
void fnPrintString(int N,char Names[20][30])
{
	int i;
	for(i=1;i<=N;i++){
		printf("%s\n",Names[i]);
	}
}