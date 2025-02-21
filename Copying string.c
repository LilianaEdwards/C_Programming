#include <stdio.h>
void copy1(char *s1,char *s2);
void copy2(char *s3,char *s4);
int main(int argc, char *argv[])
{
	char s1[20],s2[]="Hello",s3[20],s4[]="Good bye";
	copy1(s1,s2);
	printf("The string in the s1 array is %s\n",s1);
	copy2(s3,s4);
	printf("The string in the s3 array is %s\n",s3);
	return 0;
}
void copy1(char *s1,char *s2){
	int i;
	for(i=0;s2[i] != '\0';i++)
		s1[i]=s2[i];
}
void copy2(char *s3,char *s4){
	while(*s4 != '\0'){
		*s3=*s4;
		s3++;
		s4++;
	}
}