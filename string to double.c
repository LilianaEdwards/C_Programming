#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	char *string="You have 2000%";
	double d;
	char *stringPtr;
	d=strtod(string, &stringPtr);
	printf("The string is \"%s\" \n",string);
	printf("Double value is %.2f\n",d);
	printf("The remained string is \"%s\" \n",stringPtr);
	return 0;
}