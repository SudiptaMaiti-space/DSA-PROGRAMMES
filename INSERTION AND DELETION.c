#include<stdio.h>
void display(int ar[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",ar[i]);
	}
}
int insertion(int ar[],int capacity,int size,int element,int index)
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
void deletion(int ar[],int size,int index)
{
	for(int i=index;i<=size-1;i++)
	{
		ar[i]=ar[i+1];
	}
}
int main()
{
	int c,s;int e,i1,i2;
	printf("enter capacity and size: \n");
	scanf("%d %d",&c,&s);
	int ar[c];
	printf("enter elements \n");
	for(int i=0;i<s;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter element to insert and index: \n");
	scanf("%d %d",&e,&i1);
	printf("Enter index to delete: \n");
	scanf("%d",&i2);
	display(ar,s);
	printf("\n");
	s+=1;
	insertion(ar,c,s,e,i1);
	display(ar,s);
	printf("\n");
	s-=1;
	deletion(ar,s,i2);
	display(ar,s);
	printf("\n");
	return 0;
}
