#include <stdio.h>
int Factorial(int num){
	if(num == 0 || num==1)
	return 1;
	else
	return num*Factorial(num-1);
	return 0;
}
int main(int argc, char *argv[])
{
	int num,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	printf("%d != %d\n",i,Factorial(i)); //Printing factorial from function	
	return 0;
}