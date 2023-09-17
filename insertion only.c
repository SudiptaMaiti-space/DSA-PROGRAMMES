#include <stdio.h>

void display(int ar[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
}

int insertion(int ar[],int size,int capacity,int element,int index)
{
	if(size>=capacity)
	{
		return -1;
	}
	for(int i=size-1;i>=index;i--)
	{
		ar[i+1]=ar[i];
	}
	ar[index]=element;
}

int main()
{
	int n,c,e,ii;
	scanf("%d %d %d %d",&n,&c,&e,&ii);
	int ar[c];
	for(int i=0;i<n;i++)
	scanf("%d",&ar[i]);
	printf("The initial array is ");
	display(ar,n);
	printf("The array after insertion is ");
	insertion(ar,n,c,e,ii);
	display(ar,n+1);
}
