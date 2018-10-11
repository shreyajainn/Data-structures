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
	struct node *t;
	t =new(struct node);
	cin>>t->data;
	t->prev=NULL;
	t->next=NULL;
	return t;
}
struct node* insertnode()
{
	struct node* temp;
	temp =createnode();
	if(start==NULL)
	{
		start=temp;
		temp->next=NULL;
	}
	else
	{
		struct node *t;
		t=start;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
		temp->prev=t;
	}
}
void delete1()
{
	cout<<"enter the element you want to delete"<<endl;
	int k;
	cin>>k;
	struct node *t;
	t=start;
	int c=0,h=1;

	while(t->data!=k)
	{
		t=t->next;
		c++;
	}
	c++;
	if(c==1)
	{
		cout<<"this is the first node"<<endl;
	}
	else if(c==2)
	{
		start=t;
		t->prev=NULL;
	}
	else
	{
	
	t->prev->prev->next=t;
	t->prev=t->prev->prev;
}
	
}











void traverse()
{
	struct node *r;
	r=start;
	while(r->next!=NULL)
	{
		cout<<r->data<<endl;
		r=r->next;
	}
	cout<<r->data<<endl;
}
int main()
{
	for(int i=0;i<5;i++)
	{
		insertnode();
	}
	delete1();
	traverse();
}
