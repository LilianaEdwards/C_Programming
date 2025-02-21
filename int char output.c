#include <stdio.h>
int main(int argc, char *argv[])
{
	int intVal;
	char charVal;
	scanf("%d",&intVal);
	charVal=getchar();
	printf("Integer: %d\nCharacter:%c\n",intVal,charVal);
	return 0;
}