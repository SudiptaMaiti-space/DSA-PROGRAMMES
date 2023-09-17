#include<stdio.h>
int linearsearch(int n,int ar[],int element)
{
	for(int i=0;i<n;i++)
	{
		if(ar[i]==element)
		{
			printf("The element %d is found at index %d",element,i);
			break;
		}
	}
}
int main()
{
	int n,element;
	printf("enter size of array\n");
	scanf("%d",&n);
	int ar[n];
	printf("enter elements of array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("enter element to search: ");
	scanf("%d",&element);
	linearsearch(n,ar,element);
	return 0;
}
