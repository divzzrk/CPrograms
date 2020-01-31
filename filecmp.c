/*--------------------------------------------------------------------------------------------------------------------------
FileCL.c
Program to process employee information

11-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
//------------------------------------------------------prototype----------------------------------------------------------------
int Comp(FILE *fp1,FILE *fp2);
void fnLenw(FILE *fp1);
main()
{
	int Choice=1,c;
	char fname1[30],fname2[30];
	FILE *fp1,*fp2;
	
	system("clear");

	printf("Program to procees file information\n\n");
	while(Choice!=3){
		printf("\n-------------------------------------------------------------------------\n");
		printf("\t\t\t\tMENU");
		printf("\n-------------------------------------------------------------------------\n");
		printf("1. Compare two file\n");
		printf("2. Find the number of characters and lines in a file\n");
		printf("4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&Choice);
		switch(Choice){
			case 1: printf("Enter the file name 1: ");
					scanf("%s",fname1);
					printf("Enter the file name 2: ");
					scanf("%s",fname2);
					fp1=fopen(fname1,"r");
					fp2=fopen(fname2,"r");
					if(fp1==NULL || fp2==NULL)
						printf("\nCant open files\n");
					else{
						c=Comp(fp1,fp2);
						if(c==0)
							printf("\nSame");
						else
							printf("\nNot same");
					}
					break;
			case 2: printf("Enter the file name 1: ");
					scanf("%s",fname1);
					fp1=fopen(fname1,"r");
					if(fp1==NULL)
						printf("\nCant open files\n");
					else
						fnLenw(fp1);
					break;
			case 3: exit(0);
					break;
			default:printf("Sorry! You have entered a wrong choice");
		}
	}
}

//----------------------------------------------fnInputEmployeeData--------------------------------------------------------------
int Comp(FILE *fp1,FILE *fp2)
{	
	char ch1,ch2;
	
	system("clear");
	
	while(!feof(fp1) && !feof(fp2))
	{
		ch1=getc(fp1);
		ch2=getc(fp2);
		if(ch1!=ch2)
			return 1;
	}
	return 0;
}
void fnLenw(FILE *fp1)
{
	char ch;
	int nc,nw,nl;
	nc=0;
	nw=0;
	nl=0;
	
	while(!feof(fp1)){
		ch=getc(fp1);
		nc++;
		if(ch=='\n'||ch=='\0')
			nl++;
		if(ch==' '|| ch=='\n'|| ch=='\0')
			nw++;
	}
	if(nc>0){
	nw++;
	nl++;
	}
	printf("\nChar : %d\nWord: %d\nLine: %d",nc,nw,nl);
}