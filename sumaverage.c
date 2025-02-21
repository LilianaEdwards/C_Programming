#include<stdio.h>
int main( ) {
	int a,b,c,sum,average,product;
	printf("Enter three different integers:   \n");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	printf("Sum is %d \n",sum);
	average=(a+b+c)/3;
	printf("Average is %d \n",average);
	product=a*b*c;
	printf("Product is %d \n",product);
	if(a<b && a<c)
	printf("Smallest is %d \n",a);
	if(b<a && b<c)
	printf("Smallest is %d \n",b);
	if(c<a && c<b)
	printf("Smallest is %d \n",c);
	if(a>b && a>c)
	printf("Largest is %d \n",a);
	if(b>a && b>c)
	printf("Largest is %d \n",b);
	if(c>a && c>b)
	printf("Largest is %d \n",c);
return 0;
}
