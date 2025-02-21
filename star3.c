#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c,d=10; //a is the column and d is the row
	for(a=1;a<=10;a++){
		for(b=1;b<a;b++){
			printf(" ");
		}
		for(c=1;c<=d;c++){
			printf("*");
		}
		d--;
		puts("");
	}
	return 0;
}