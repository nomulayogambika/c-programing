#include<stdio.h>
void fibonacci(int n);
int main()
{
	int n;
	printf("enter the number of terms\n");
	scanf("%d",&n);
	fibonacci(n);
	return 0;
}
void fibonacci(int n)
{
	int a=0,b=1,c,i;
	printf("fibnoacci series");
	for(i=i;i<n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
}
