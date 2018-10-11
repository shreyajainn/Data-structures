ousing namespace std;
#include<iostream>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *start=NULL;
struct node* createnode()
{
	struct node *temp;
		
	temp =new (struct node);
	cin>>temp->data;
	temp->prev=NULL;
	temp->next=start;
	return temp;
}
struct node*  insertnode()
{
	struct node *t,*p;
	t=createnode();
p=start;
if(start==NULL)
{
	start=t;
	t->next=start;
	t->prev=NULL;
}
else
{
	while(p->next!=start)
	{
		p=p->next;
	}
	t->prev=p;
	p->next=t;
	t->next=start;
}
}
void traverse()
{
	struct node *t;
	t=start;
	while(t->next!=start)
	{
	
		cout<<t->data;
		t=t->next;
	}
	cout<<t->data;

}
void delete1()
{
	struct node *t;
	t=start;
	if(t->prev==NULL)
	{
		t=t->next;
		t->prev=NULL;
		start=t;
		
	}
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


