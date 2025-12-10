#include<stdio.h>
int reverse (int num);
int main()
{
	int number,res;
	printf("enter the number\n");
	scanf("%d",&number);
	res=reverse (number);
	printf("reverse of num=%d",res);
	return 0;
}
int reverse (int num)
{ 
int rev=0,value;
while (num!=0)
{ 
value=num%10;
rev=rev*10+value;
num=num/10;
}
return rev;
}
