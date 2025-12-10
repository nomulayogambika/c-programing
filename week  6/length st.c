#include<stdio.h>
int main()
{
	char st[30];
	int i,count=0;
	printf("enter the string/n");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	count++;
	printf("the length of the string:%d",count);
	printf("the reverse of a string/n");
	printf("%c",st[i]);
	return 0;
}
