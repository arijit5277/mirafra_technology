#include<stdio.h>
#include<stdlib.h>
struct sample
{
	int data;
	struct sample *next;
};
void add_at_beg(struct sample **h,int num)
{
	struct sample *temp=(struct sample *)malloc(sizeof(struct sample));
	temp->data=num;
	temp->next=*h;
	*h=temp;
}
void add_at_end(struct sample **h,int num)
{
	struct sample *temp=(struct sample*)malloc(sizeof(struct sample));
	struct sample *ptr=NULL;
	temp->data=num;
	temp->next=NULL;
	ptr=*h;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
}
void insertion(struct sample **h, int num, int pos)
{
	struct sample *temp=(struct sample*)malloc(sizeof(struct sample));
	struct sample *ptr=NULL;
	temp->data=num;
	temp->next=NULL;
	ptr=*h;
	for(int i=1;i<pos;i++)
	{
		ptr=ptr->next;
	}
		temp->next=ptr->next;
		ptr->next=temp;
}
void delete_beg(struct sample **h)
{
	struct sample *temp=(struct sample*)malloc(sizeof(struct sample));
	temp=*h;
	*h=temp->next;	
	free(temp);
}
void delete_end(struct sample **h)
{
	struct sample *temp=(struct sample *)malloc(sizeof(struct sample));
	struct sample *ptr=NULL;
	temp=*h;
	while (temp->next!=NULL)
	{
		ptr=temp;
		temp=temp->next;
	}

	ptr->next=temp->next;
	free(temp);
}
void delete_at_mid(struct sample **h,int pos)
{
	struct sample *temp=(struct sample *)malloc(sizeof(struct sample));
	struct sample *ptr=NULL;
	temp=*h;
	for (int i=1;i<pos;i++)
	{
		ptr=temp;
		temp=temp->next;
	}
	ptr->next=temp->next;
	free(temp);
}
void delete_at_midd(struct sample **h,int num)
{
	struct sample *temp=(struct sample *)malloc(sizeof(struct sample));
	struct sample *ptr=NULL;
	temp=*h;
	while (temp->data!=num)
	{
		ptr=temp;
		temp=temp->next;
		

	}
	ptr->next=temp->next;
	free(temp);
}
void display(struct sample **ptr)
{
	struct sample *temp=NULL;
	temp=*ptr;
	printf("***********************Structure Nodes*************************\n\n");
	printf("***********************Structure Nodes*************************\n\n");
	while (temp!=NULL)
	{
		printf("Nodes ::: %d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	struct sample *p=NULL;
	add_at_beg(&p,10);
	add_at_beg(&p,20);
	add_at_beg(&p,30);
	add_at_beg(&p,40);
	add_at_beg(&p,50);
	display(&p);

	add_at_end(&p,11);
	add_at_end(&p,22);
	add_at_end(&p,33);
	add_at_end(&p,44);
	add_at_end(&p,55);
	display(&p);

	insertion(&p,15,3);
	display(&p);

	delete_beg(&p);
	display(&p);

	delete_end(&p);
	display(&p);
	
	delete_at_mid(&p,3);
	display(&p);

	delete_at_midd(&p,44);
	display(&p);
}
