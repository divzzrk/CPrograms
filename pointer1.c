/*-------------------------------------------------------------------------------------------------------------------------------
pointer1.c
Function program in C to find the length of a string pointed by a memory location
DIVYA RAJ K
11-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
int fnStrlen(char *S);
main()
{
	int len;
	char *S;
	S=(char*)malloc(60);
	
	system("clear");
	
	printf("Enter a string whose length has to be found: ");
	scanf("%s",S);
	len=fnStrlen(S);
	printf("\nLength=%d",len);
}
int fnStrlen(char *S)
{
	int i=0;
	while(*(S+i)!='\0')
	{
		i++;
	}
	return i;
}