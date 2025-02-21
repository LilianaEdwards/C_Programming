#include <stdio.h>
int Fibonacci(int num){
	if(num==0 || num==1)
	return num;
	else
	return Fibonacci(num-1)+Fibonacci(num-2);
	return 0;
}
int main(int argc, char *argv[])
{
	int num;
	printf("Enter a number to find its Fibonacci: ");
	scanf("%d",&num);
	printf("Fibonacci(%d) = %d\n",num,Fibonacci(num));
	return 0;
}