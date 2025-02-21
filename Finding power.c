#include <stdio.h>
int main(int argc, char *argv[])
{
	int base,exponent;
	long power=1;
	printf("Enter base and Exponent: ");
	scanf("%d %d",&base,&exponent);
	while(exponent!=0){
		power*=base; //power=power*base2
		exponent--;
	}
	printf("Power is %ld\n",power);
	return 0;
}