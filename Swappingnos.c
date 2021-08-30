#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	
	printf("\n Numbers before swapping a= %d and b=%d",a,b);
	
	c=a;
	a=b;
	b=c;
	
	
	printf("\n Numbers After swapping a= %d and b=%d",a,b);
	
	
		return 0;
}
