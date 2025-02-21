#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,sum=0;
	for(a=1;a<=30;a++){
		if(a%2==0)
		sum=sum+a;
	}
	printf("The sum of even integers from 2 to 30 is %d\n",sum);
	return 0;
}