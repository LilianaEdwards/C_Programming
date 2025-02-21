//A program that sum entered number until 9999
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,count=0,sum=0;
	float avg;
	printf("Enter a number(9999 to end): \n");
	scanf("%d",&i);
	while(i != 9999){
		count+=1;
		sum+=i;
		scanf("%d",&i);
	}
	avg=(float)sum/count;
	printf("The sum of several integers is %d and \n The average is %.2f \n",sum,avg);
	return 0;
}