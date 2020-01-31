#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
	FILE *fp;
	char ch;
	system("clear");
	
	printf("Argc: %d\n",argc);
	fp=fopen(argv[1],"r");
	if(fp!=NULL){
		fscanf(fp,"%c",&ch);
		while(!feof(fp)){
			printf("%c",ch);
			fscanf(fp,"%c",&ch);
		}
	}
	else{
		printf("Sorry! File not found");
	}
}