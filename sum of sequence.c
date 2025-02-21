#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k,avg,sum=0;
	j=1;
	printf("Enter a number: \n");
	scanf("%d",&i);
	while(j<=i){
		scanf("%d",&k);
		sum=sum+k;
		j++;
	}
	avg=sum/i;
	printf("The sum of the sequence is %d\nThe average is %d\n",sum,avg);
	return 0;
}