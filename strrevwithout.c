#include<stdio.h>
void reverse(char *str){
	if(*str){
		reverse(str + 1);
		printf("%c",*str);
	}
}
void main()
{
	char c[20];
	printf("Enter a string");
	scanf("%[^\n]s", c);
	reverse(c);
}