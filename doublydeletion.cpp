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
struct node* delete1()
{
	struct node *temp;
	int k;
	cout<<"enter the element you want to delete"<<endl;
	cin>>k;
	int c=0,h=1;
	struct node *p;
	p=start;
	while(p->next!=NULL)
	{
		h++;
		p=p->next;
	}
	temp =start;
	while(temp->data!=k)
	{
		temp=temp->next;
		c++;
	
}
c++;
if(c<=h)
{
		if(c==h)
		{
			cout<<"we cant dalete"<<endl;
		}
		else if(c==h-1)
		{
			struct node *r;
			r=temp;
			temp->prev->next=temp;
			temp->next=temp->next->next;
			
			
			
			
		}
		else
		{
		
	 
	 	 temp->next=temp->next->next;
	 temp->next->prev=temp;
}
}
else
{
	cout<<"elememt not found"<<endl;
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
