#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,sum=0;
	for(x=1;x<=15;x++){
		if(x%2==1)
		sum=sum+x;
	}
	printf("The sum of odd numbers from 1 to 15 is %d\n",sum);
	return 0;
}