#include <stdio.h>
int main(int argc, char *argv[])
{
	int n=10,i,j,k;
	for(i=0;i<=n;i++){
		for(j=1;j<=n;j--){
			printf(" ");
		}
		printf("*");
		}
		for(k=0;k<=i;k++){
			printf(" ");
		for(j=1;j<=i;j++){
			printf(" ");
		}
		}
		if(i>0)
		printf("*");
	return 0;
}