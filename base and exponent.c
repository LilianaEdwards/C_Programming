#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c,count,result=1;
	printf("Enter the base number: ");
	scanf("%d",&a);
	printf("Enter the expontential number: ");
	scanf("%d",&b);
	c=a;
	for(count=1;count<b;count++){
		result=a*c;
		c=result;
	}
	printf("The result is %d\n",result);
	return 0;
}