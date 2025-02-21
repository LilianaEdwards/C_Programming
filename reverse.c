#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,reverse,remainder;
	reverse=0;
	printf("Enter a number to get its reverse: ");
	scanf("%d",&n);
	while(n != 0){
		remainder=n%10;
		reverse=reverse*10 +remainder;
		n=n/10;
	}
	printf("The reverse number is %d\n",reverse);
	return 0;
}