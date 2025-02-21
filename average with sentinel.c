#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,sum=0,count=0;
	float avg;
	printf("Enter numbers to find average or 9999 to exit: \n");
	scanf("%d",&a);
	while (a!= 9999){
		sum=sum+a;
		scanf("%d",&a);
		count++;
	}
	avg=(float)sum/count;
	printf("The average of the entered numbers is %.2f\n",avg);
	return 0;
}