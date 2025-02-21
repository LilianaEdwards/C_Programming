#include <stdio.h>
#include <ctype.h>
int convertToLowercase(int *sptr){
	while(*sptr != '\0'){
		*sptr=tolower(*sptr);
		sptr++;
	}
}
int main(int argc, char *argv[])
{
	char string[50]="HI THERE!HOW ARE YOU?";
	convertToLowercase(string);
	printf("The lowercase string is %c\n",string);
	return 0;
}