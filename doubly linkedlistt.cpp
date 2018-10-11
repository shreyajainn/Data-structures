using namespace std;
#include<iostream>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node* start =NULL;
struct node* createnode()
{
	struct node *temp;
	
	temp =new (struct node);
	cin>>temp->data;
	temp->prev=NULL;
	temp->next=NULL;
	return temp;
	
}
struct node* insertnode()
{
	struct node *p,*temp;
	temp=createnode();
	p=start;
	if(start==NULL)
	{
		start=temp;
		temp->prev=NULL;
	temp->next=NULL;
		
	}
	else
	{
		while(p->next!=NULL)
		{
			p=p->next;
		}
		temp->prev=p;
		p->next=temp;
		temp->next=NULL;
	}
		

}
void addnode()
{
	struct node *t,*p;

	t=createnode();
	if(start==NULL)
	{
		start=t;
		t->next=NULL;
		t->prev=NULL;
	}
	else
	{
	start->prev=t;	
	t->prev=NULL;
	t->next=start;
	start=t;
	}
}
void traverse()
{
	struct node *t;
	t=start;
	while(t->next!=NULL)
	{
		cout<<t->data<<endl;
		t= t->next;
	}
	cout<<t->data;
}
int main()
{
	for(int i=0;i<5;i++)
	{
		insertnode();
	}
	addnode();
	traverse();
}
	

