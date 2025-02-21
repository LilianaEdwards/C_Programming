#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,total=0;
	for(i=100;i<=150;++i){
		total+=i;
	}
	printf("Total is %d\n",total);
	return 0;
}