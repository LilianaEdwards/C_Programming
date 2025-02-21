#include <stdio.h>
int main(int argc, char *argv[])
{
	int num,reverse=0;
	printf("Enter a number to find its reverse: ");
	scanf("%d",&num);
	while(num!=0){
		reverse=(reverse*10)+(num%10);
		num=num/10;
	}
	printf("The reverse number is %d\n",reverse);
	return 0;
}