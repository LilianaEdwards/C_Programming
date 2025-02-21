#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	char c;
	short s;
	long l;
	double d;
	float f;
	long long ll;
	long double ld;
	int array[20];
	int *ptr=array;
	printf("Size of int=%u\nSize of char=%u\nSize of short=%u\nSize of long=%u\nSize of double=%u\nSize of float=%u\nSize of long long=%u\nSize of long double=%u\nSize of array=%u\nSize of ptr=%u\n",
	sizeof(int),sizeof(char),sizeof(short),sizeof(long),sizeof(double),sizeof(float),sizeof(long long),sizeof(long double),sizeof array,sizeof ptr);
	
	return 0;
}