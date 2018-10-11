using namespace std;
#include<iostream>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node* start=NULL;
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
void duplicate()
{
	struct node *ptr;
	ptr =start;
	int arr[100]={0};
	
	while(ptr!=NULL)
	{
		
				arr[ptr->data]++;
					ptr=ptr->next;
	}
	
	for(int i=0;i<100;i++)
	{
		if(arr[i]>0)
		{
		
			cout<<i<<"-"<<arr[i]<<endl;
		}
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
	duplicate();
}
	

