#include<stdio.h>
#include<math.h>
/*void main(){
	long int binary = 0;
	int decimal=10,rem,i=0;
	while(decimal > 0)
	{
		binary += ((decimal % 2) * pow(10,i++));
		decimal/=2;
	}
	printf("%ld", binary);
}*/
int find(int dec){
	if(dec == 0)
		return 0;
	else
		return(dec % 2 +10 * find(dec/2));
}
void main()
{
	long int bin = find(10);
	printf("%ld",bin);
}