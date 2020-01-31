#include<stdio.h>
void main()
{
	FILE *fp, *fp1;
	fp = fopen("C:\\cygwin64\\home\\hp\\divya\\file1.c", "r");
	fp1 = fopen("C:\\cygwin64\\home\\hp\\divya\\file1.c", "a");
	char c;
	c= fgetc(fp);
	while(c!=EOF){
		printf("%c",c);
		fputc(c,fp1);
		c=fgetc(fp);
	}
}