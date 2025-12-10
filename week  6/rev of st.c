#include<stdio.h>
#include<string.h>
int main ()
{
	int rev;
char st1[30];
printf("enter the strings to read/n");
gets(st1);
strrev(st1);
printf("reverse of the string:\n");
puts(st1);
return 0;	
}
