#include<stdio.h>
int read(int a[100][100],int n,int r1,int c1);
int main()
{
	int a[100][100],n,r1,c1;
	printf("enter the order of the matrix\n");
	scanf("%d%d",&r1,&c1);
	read=read(a);
	printf("enter the elements");
	return 0;
	
}
int read(int a[100][100],int n)
{
int i,j,n;
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
	scanf("%3d",&a[i][j]);
}
}
return read;
}
