#include<stdio.h>
int main( ) {
	int a,b;
	printf("Enter two integers: \n");
	scanf("%d %d",&a,&b);
	if(a>b)
	printf("%d is larger",a);
	else if(a<b)
	printf("%d is larger",b);
	else
	printf("These numbers are equal");
	return 0;
}