#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	puts("According to isdigit: ");
	printf("%s",isdigit('8')?"8 is a digit":"8 is not a digit");
	puts("");
	printf("%s",isdigit('#')?"# is a digit":"# is not a digit");
	puts("");
	puts("According to isalpha: ");
	printf("%s",isalpha('A')?"A is a letter":"8 is not a letter");
	puts("");
	printf("%s",isalpha('a')?"a is a letter":"a is not a letter");
	puts("");
	printf("%s",isalpha('&')?"& is a letter":"& is not a letter");
	puts("");
	printf("%s",isalpha('4')?"4 is a letter":"4 is not a letter");
	puts("");
	puts("According to isalnum: ");
	printf("%s\n",isalnum('A')?"A is a letter or digit":"A is not a letter or digit");
	printf("%s\n",isalnum('8')?"8 is a letter or digit":"8 is not a letter or digit");
	printf("%s\n",isalnum('#')?"# is a letter or digit":"# is not a letter or digit");
	puts("According to isxdigit: ");
	printf("%s\n",isxdigit('F')?"F is a hexadecimal digit":"F is not a hexadecimal digit");
	printf("%s\n",isxdigit(']')?"] is a hexadecimal digit":"] is not a hexadecimal digit");
	printf("%s\n",isxdigit('7')?"7 is a hexadecimal digit":"7 is not a hexadecimal digit");
	printf("%s\n",isxdigit('$')?"$ is a hexadecimal digit":"$ is not a hexadecimal digit");
	printf("%s\n",isxdigit('f')?"f is a hexadecimal digit":"f is not a hexadecimal digit");
	return 0;
}