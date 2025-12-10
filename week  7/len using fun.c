#include<stdio.h>
#include<string.h>
int main()
{
	char st[30];
	int length;
	printf("enter the string to read/n");
	gets(st);
	length=strlen(st);
	printf("the length of have entered is %d/n",length);
	return 0;
}
