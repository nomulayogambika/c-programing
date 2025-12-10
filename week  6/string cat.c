#include<stdio.h>
#include<string.h>
int main ()
{
	char st1[30],st2[30];
	printf("enter the string 1");
	gets(st1);
	printf("enter the string 2");
	gets(st2);
	st2==strcat(st2,st1);
	printf("enter the string");
	puts(st2);
	return 0;
}
