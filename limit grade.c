#include <stdio.h>
int main(int argc, char *argv[])
{
	int grade,total,counter;
	double avg;
	total=0;
	counter=0;
	printf("Enter your grade: ");
	scanf("%d",&grade);
	while(grade != -1){
		total+=grade;
		counter++;
		printf("Enter your grade: ");
		scanf("%d",&grade);
	}
	if(counter != 0){
	avg=(double)total/counter;
	printf("The total grade is %d\nThe average grade is %.2lf \n",total,avg);
	}
	else
	printf("There is no grade.\n");
	return 0;
}