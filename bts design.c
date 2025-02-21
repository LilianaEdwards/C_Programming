#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=2*n;j++){
			if(j<=i || j>(2*n-i))
			printf("*");
			else
			printf(" ");
		}
		puts("");
	}
	return 0;
}