#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,n;
	int a=0,b=1;
	int c=a+b;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("Fibonacci sequences is: %d, %d, ",a,b);
	for(i=1;i<n;i++){
		printf("%d, ",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}