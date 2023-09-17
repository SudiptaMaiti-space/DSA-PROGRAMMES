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

struct node* insertatend(struct node* head,int data)
{
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	struct node* p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	ptr->data=data;
	p->next=ptr;
	ptr->next=NULL;
	return head;
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
	head=insertatend(head,99);
	traverse(head);
	return 0;
}
