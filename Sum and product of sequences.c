#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,num,i,sum=0;
	long int product=1;
	printf("Enter a number: \n");
	scanf("%d",&n); //number of values remaining to be entered
	for(i=1;i<=n;i++){
		scanf("%d",&num); //Getting numbers to add and multiply 
		sum=sum+num;
		product=(long)product*num;
	}
	printf("The sum of the entered values is %d\n",sum);
	printf("The product of the entered values is %ld\n",product);
	return 0;
}