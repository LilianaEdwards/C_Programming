#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c,d=1; //a is the column and d is the row
	for(a=10;a>=1;a--){
		for(b=1;b<=a-1;b++){
			printf(" ");
		}
		for(c=1;c<=d;c++){
			printf("*");
		}
		puts("");
	    d++;
	}
	return 0;
}