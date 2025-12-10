#include<stdio.h>
int findmax(int a[100],int num);
int main()
{
	int a[100],n,i,max;
	printf("enter the no.of elements\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
max=findmax(a,n);
printf("the max number in the array =%d",max);
return 0;
	
}
int findmax(int a[100],int n)
{
	int i,num,max;
	max=a[0];
	for(i=1;i<n;i++)
	
	if(a[i]>max)
	max=a[i];

     return max;
}
