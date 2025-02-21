#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,num,rem,sum=0;
	printf("Enter a number to check perfect or not: ");
	scanf("%d",&num);
	for(i=1;i<num;i+=1){
		rem=num%i;
		if(rem==0)
		sum+=i;
	}
	if(sum==num)
	printf("%d is a perfect number\n",num);
	else
	printf("%d is not a perfect number\n",num);
	return 0;
}