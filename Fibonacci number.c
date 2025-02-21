#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c,i,num;
	a=0,b=1;
	printf("Enter number of terms: ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("%d\t",a);
		c=a+b; //next term
		a=b;
		b=c;
	}
	return 0;
}