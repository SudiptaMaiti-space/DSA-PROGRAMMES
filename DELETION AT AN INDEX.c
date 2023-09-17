#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

void traverse(struct node* ptr)
{
	printf("The array is- ");
	while(ptr!=NULL) 
	{
	printf("%d ",ptr->data);
	ptr=ptr->next;
	}
	printf("\n");
}

struct node* deletearray(struct node* head,int index)
{
	struct node* p=head;
	struct node* q=head->next;
	for(int i=1;i<index;i++)
	{
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
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
	head=deletearray(head,1);
	traverse(head);
	return 0;
}
