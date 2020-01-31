#include<stdio.h>
int n = 10;
int main(){
	static int i = 1;
	if(printf("%d ",i) && i++<n && main()){}
	return 0;
}