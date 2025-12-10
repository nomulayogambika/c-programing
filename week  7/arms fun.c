#include<stdio.h>
int armstorng (int n);
int main()
{
	int num;
	printf("enter the value of n \n");
	scanf("%d",&num);
	if ( armstrong(num))
	{
		printf("%d is an armstrong number\n");
}
else
{
printf("%d is not a armstrong number\n");	
}
return 0;
}
int armstrong(int n)
{
	int x=n, sum=0,rem=0;
	while (n!=0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	return sum == x;
}
