#include<stdio.h>
int main()
{
	char st[30];
	int i;
	printf("enter the string/n");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	st[i]=st[i]+32;
	printf("lower case is %c");
	return 0;
}
