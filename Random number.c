#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	for(i=1;i<=20;i++){
		printf("%3d",1+(rand()%6));
		if(i%5==0)
		puts("");
	}
	return 0;
}