#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b; //a is the column and b is the row
	for(a=1;a<=10;a++){
		for(b=1;b<=a;b++){
			printf("*");
		}
		puts("");
	}
	return 0;
}