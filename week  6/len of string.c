#include<stdio.h>
int main()
{
	char st1[50],st2[50];
	int len=0,i,j;
	printf("enter the strings\n");
	gets(st1);
	for(i=0;st1[i]!='\0';i++)
	len ++;
	for( i=1,j=len-1;j>=0; i--,j--)
	st2[i]=st1[j];
	st2[i]='\0';
	printf("enter the reverse of a string %c\n");
	puts(st2);
	return 0;
}
