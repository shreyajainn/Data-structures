using namespace std;
#include<iostream>
struct node
{
	int data;
	int pri;
	struct node *next=NULL;
};
struct node* start=NULL;
struct node* createnode()
{
	struct node *temp;
	temp = new(struct node);
	cin>>temp->data;
	cin>>temp->pri;
	temp->next=NULL;
}
struct node *insertnode()
{
	struct node *t;
	t = createnode();
	struct node *t1;
		struct node *k;
	
	if(start==NULL||t->pri<start->pri)
	{
		t->next=start;
		start=t;
	}
	else
	{
			t1=start;
		while(t1->next!=NULL&&t1->pri<t->pri)
		{
			k=t1;
			t1=t1->next;
		}
		 if(t1->pri>t->pri)
	{
		k->next=t;
		t->next=t1;
	}
	else 
	{42
				
		t1->next=t;
		t->next=NULL;
	

	}
		
	}
}
void traverse()
{
	struct node *t;
	t=start;
	while(t!=NULL)
	{
		cout<<t->data<<"--> "<<t->pri<<endl;
		t= t->next;
	}
}
int main()
{
	for(int i=0;i<5;i++)
	{
		insertnode();
	}
	traverse();
}
