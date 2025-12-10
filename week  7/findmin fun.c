#include<stdio.h>
int findmin(int a[100],int n);
int main()
{
		int a[100],n,i,min;
	printf("enter the no.of elements\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
min=findmin(a,n);
printf("the min number in the array =%d",min);
return 0;
	
}
int findmin(int a[100],int n)
{
	int i,num,min;
	min=a[0];
	for(i=1;i<n;i++)
	if(a[i]<min)
	min=a[i];
     return min;
}

