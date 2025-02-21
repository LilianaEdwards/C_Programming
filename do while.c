#include <stdio.h>
int main(int argc, char *argv[])
{
	int i=2;
	do{
		if (i%2==0){
			printf("%u\n",i);
		}
		i+=2;
	}while(i<=100);
	return 0;
}