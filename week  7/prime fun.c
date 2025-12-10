#include<stdio.h>
int prime(int num);
int main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	if(prime(num))
	printf("%d is a prime number\n",num);
	else
	printf("%d is not a prime number\n",num);
	return 0;
}
int prime(int num)
{
	int i,count=0;
	for(i=1;i<=num;i++){
		if(num%i==0){
			count++;
		}
	}
	if (count==2)
	return 1;
	else
	return 0;
}
