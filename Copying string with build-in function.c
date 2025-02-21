#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	char x[]="Happy birthday to you";
	char y[25];
	char z[15];
	printf("strcpy(y,x) is %s\n",strcpy(y,x));
	strncpy(z,x,14);
	z[14]='\0';
	printf("strncpy(z,x,14) is %s\n",z);
	return 0;
}