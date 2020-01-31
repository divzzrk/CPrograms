#include<stdio.h>

void main(){
	FILE *fp;
	fp = fopen("hellonew.txt","w");
	if(fp == NULL)
		printf("Sorry");
	else{
		char c[20] = {'h','e','l','l','o'};
		fprintf(fp,"\n%s\n123",c);
		printf("File is written successfully");
		fclose(fp);
		fp = fopen("hellonew.txt","r");
		char p[50];
		int m;
		fscanf(fp,"%s%d",p,&m);
		printf("%s%d",p,m);
	}
	fclose(fp);
}