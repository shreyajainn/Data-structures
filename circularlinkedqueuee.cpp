using namespace std;
#include<iostream>
struct node
{
	int data;
	struct node* next=NULL;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *createnode()
{
	struct node *p;
	p=new(struct node);
	cin>>p->data;
	p->next=NULL;
}
struct node *insertnode()
{

		struct node *p;
	p=createnode();
	if(front==NULL&&rear==NULL)
	{
		front=p;
		rear=p;
		p->next=NULL;
	}
	else
	{
		struct node *t;
	t=front;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next=p;
	p->next=NULL;
	rear=p;
}
}
struct node *deletion()
{
	if(rear->next==NULL&&front->next==NULL)
	{
		front=NULL;
		rear=NULL;
		cout<<"nothing to be deleted"<<endl;
	}
	else if(rear->next==front->next)
	{
	rear=NULL;
	front=NULL;	
	}
	else if(front->next==NULL&&front!=rear)
	{
		front=NULL;
	}
	else
	{
		front = front->next;
	}
	return front;
}
int main()
{
	insertnode();
	insertnode();
	insertnode();
	insertnode();
	deletion();
	deletion();
		deletion();
		deletion();
				deletion();
	while(front!=NULL)
	{
		cout<<front->data;
		front=front->next;
		
	}
	{
		
	}
}
