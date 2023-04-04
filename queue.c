#include<stdio.h>
#include<stdio.h>
struct sample 
{
	int data;
	struct sample *next;
};
struct sample *front=NULL;
struct sample *rear =NULL;

void insert(struct sample *ptr, int num)
{
	ptr=(struct sample*)malloc(sizeof(struct sample));
	ptr->data=num;
	if(front==NULL)
	{
		front=ptr;
		rear=ptr;
		front->next=NULL;
		rear->next=NULL;
	}
	else
	{
		rear->next=ptr;
		rear=ptr;
		rear->next=NULL;

	}
}
void delete(struct sample *ptr)
{
	ptr=front;
	front=front->next;
	free(ptr);
}
void display(struct sample *ptr)
{
	ptr=front;
	while(ptr!=NULL)
	{
		printf("%d-->",ptr->data);
		ptr=ptr->next;

	}
	printf("NULL\n");

}
int main()
{
	struct sample *head=NULL;
	insert(head,50);
	display(head);
	printf("%d\n",front->data);
	delete(head);
	printf("after delete first node \n");
	display(head);
	return 0;
}
