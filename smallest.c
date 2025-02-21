#include <stdio.h>
int main(int argc, char *argv[])
{
	int num,count,number,sm; //sm is the smallest
	printf("Enter a number: ");
	scanf("%d",&num); //number of number to find smallest
	scanf("%d",&number); //first number
	sm=number; //Let first number to smallest
	for(count=1;count<num;count++){
		scanf("%d",&number); //Get next number
		if(number<sm)
			sm=number;
	}
	printf("The smallest number is %d\n",sm);
	return 0;
}