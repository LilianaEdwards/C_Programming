#include <stdio.h>
int Fibonacci(int num); //Declaring Function variable
int main(int argc, char *argv[])
{
	int i,num;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=0;i<=num;i++){
		printf("Fibonacci(%d) = %d\n",i,Fibonacci(i));
	}
	return 0;
}
int Fibonacci(int num){
	if(num==0 || num==1)
	return num;
	else
	return Fibonacci(num-1)+Fibonacci(num-2);
	return 0;
}