#include <stdio.h>
int main(int argc, char *argv[])
{
	int grade,total,counter;
	double avg;
	total=0;
	counter=1;
	while(counter<=10){
		printf("Enter your grade: ");
		scanf("%d",&grade);
		total+=grade;
		counter++;
	}
	avg=(double)total/counter;
	printf("The total grade is %d\n The average grade is %.2lf \n",total,avg);
	return 0;
}