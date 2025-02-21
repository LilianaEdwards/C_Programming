#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	printf("Enter a number: ");
	scanf("%d",&i);
	switch(i%2){
		case 0:
		puts("Even integer");break;
		case 1:
		puts("Odd integer");
	}
	return 0;
}