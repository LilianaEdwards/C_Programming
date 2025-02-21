//A program that sum entered sequence number
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j=1,l,avg,sum=0;
	printf("Enter a number: \n");
	scanf("%d",&i);
	while(j<=i){
		scanf("%d",&l);
		sum=sum+l;
		j++;
	}
	avg=sum/i;
	printf("The sum of a sequence of integers is %d \n The average is %d\n",sum,avg);
	return 0;
}