#include <stdio.h>
int main(int argc, char *argv[])
{
	int num,i,count=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(num%i == 0)
		count++;
	}
	if(count == 2){
	printf("%d is a prime number\n",num);
	}
	else{
	printf("%d is not a prime number\n",num);
	}
	return 0;
}