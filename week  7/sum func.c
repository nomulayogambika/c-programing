#include<stdio.h>
int sumofdigits (int num);
int main()
{
	int num, sum,res;
	printf("enter the value\n");
	scanf("%d",&num);
	res=sum (num);
	printf("sum of the digits=%d",sum);
	return 0;
}
int sum of digits (int num);
{
	int sum=0,digit;
	while(num!=0)
	{ 
	digit=num%10;
	sum=sum+digit;
	num=num/10;
	}
	return sum;
}
