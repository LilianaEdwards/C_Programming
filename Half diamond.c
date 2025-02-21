#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j,place,a;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<2*n;i++){
		a=1;
		if(i<n)
		place=i;
		else
		place=abs(2*n-i);
		for(j=1;j<=2*place-1;j++)
		printf("%d",a++);
		printf("\n");//new line  
	}
	return 0;
}