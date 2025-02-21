#include <stdio.h>
int perfect(int num){
	int i,sum=0;
	for(i=1;i<num;i++){
		if(num%i==0)
		sum+=i;
	}
	if(sum==num)
	printf("%d\t",num);
	return 0; //You can remove it or not
}
int main(int argc, char *argv[])
{
	int num=1;
	printf("The perfect number between 1 and 1000 are: ");
	while(num<=1000){
		perfect(num); //calling Function perfect
		num++;
	}
	puts("");
	return 0;
}