#include <stdio.h>
int Fibonacci(int num){
	int a=0,b=1,count,sum=0;
	if(num==0)
	printf("Fibonacci[0]=0\n");
	else if(num==1)
	printf("Fibonacci[0]=0\nFibonacci[1]=1\n");
	else
	printf("Fibonacci[0]=0\nFibonacci[1]=1\n");
	for(count=2;count<=num;count++){
		sum=a+b;
		a=b;
		b=sum;
		printf("Fibonacci[%d]=%d\n",count,sum);
	}
	return 0;
}
int main(int argc, char *argv[])
{
	int num;
	printf("Enter a number to get its Fibonacci sequence: ");
	scanf("%d",&num);
	Fibonacci(num);
	return 0;
}