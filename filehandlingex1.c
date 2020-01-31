#include<stdio.h>
typedef struct stud{
	int regno;
	char name[20];
}STUD;
void main(){
	FILE *fp;
	STUD s;
	int reg;
	char name[20];
	fp = fopen("hellonew.txt","w");
	printf("Enter the student regno and name: ");
	scanf("%d",&s.regno);
	scanf("%s",s.name);
	fwrite(&s,sizeof(STUD),1,fp);
	fread(&s,sizeof(STUD),1,fp);
	printf("From file: regno = %d, name = %s", s.regno, s.name);
}