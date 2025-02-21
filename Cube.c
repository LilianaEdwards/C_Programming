#include <stdio.h>
int cubeByReference(int *nptr){
	return *nptr**nptr**nptr;
}
int main(int argc, char *argv[])
{	
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("The cube result of %d is %d\n",n,cubeByReference(&n));
	return 0;
}