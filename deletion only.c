#include <stdio.h>

void display(int ar[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
}

void deletion(int ar[],int size,int index)
{
	for(int i=index;i<size-1;i++)
	{
		ar[i]=ar[i+1];
	}
}

int main()
{
	int n,ii;
	scanf("%d %d",&n,&ii);
	int ar[n];
	for(int i=0;i<n;i++)
	scanf("%d",&ar[i]);
	printf("The initial array is ");
	display(ar,n);
	printf("The array after deletion is ");
	deletion(ar,n,ii);
	display(ar,n-1);
}
