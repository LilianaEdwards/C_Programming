#include <stdio.h>
int main(int argc, char *argv[])
{
	float i;
	for(i=.000001;i<=.0001;i+=.000002){
		printf("%.6f\n",i);
	}
	return 0;
}