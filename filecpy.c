#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
	FILE *fp,*fp1;
	char ch;
	system("clear");
	
	printf("Argc: %d\n",argc);
	fp=fopen(argv[1],"r");
	fp1=fopen(argv[2],"w");
	if(fp!=NULL){
		//fscanf(fp,"%c",&ch);
		ch=getc(fp);
		while(!feof(fp)){
			//fprintf(fp1,"%c",ch);
			putc(ch,fp1);
			//fscanf(fp,"%c",&ch);
			ch=getc(fp);
		}
	}
	else{
		printf("Sorry! File not found");
	}
}