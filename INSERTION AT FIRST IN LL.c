#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

void traverse(struct node* ptr)
{
	printf("The elements are: ");
	while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}

struct node* insertfirst(struct node* head,int data)
{
	struct node* p=(struct node*)malloc(sizeof(struct node));
	p->data=data;
	p->next=head;
	return p;
}

int main()
{
	struct node* head;
	struct node* second;
	struct node* third;
	struct node* forth;
	struct node* fifth;
	
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	forth=(struct node*)malloc(sizeof(struct node));
	fifth=(struct node*)malloc(sizeof(struct node));
	
	head->data=11;
	head->next=second;
	
	second->data=22;
	second->next=third;
	
	third->data=33;
	third->next=forth;
	
	forth->data=44;
	forth->next=fifth;
	
	fifth->data=55;
	fifth->next=NULL;
	
	traverse(head);
	head=insertfirst(head,99);
	traverse(head);
	return 0;
}
