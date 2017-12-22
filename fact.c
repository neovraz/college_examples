#include<stdio.h>

int main()

{
	
	int a;
	long long i,fact=1;

	printf("Enter a number");
	scanf("%d",&a);
	i=1;
	void func()
	{
	
	
	
	if (i<=a)
	{
	fact=fact*i;
	i=i+1;
	
	func();
	}
	}
	func();
	printf("Factorial of %d is=%lld",a,fact);

	return 0;
}
