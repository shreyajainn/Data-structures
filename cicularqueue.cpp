using namespace std;
#include<iostream>
int arr[20];
int front =-1;
int rear=-1;
int size =5;
void insertion(int s)
{
	if(rear==-1&&front==-1)
	{
		rear=rear+1;
		front = front+1;
		arr[rear]=s;
	}
else if(front==0&&rear==size-1)
	{
		cout<<"overflow"<<endl;
	}
else if(front==rear+1)
	{
		cout<<"overflow"<<endl;
	}
else if(front!=0&&rear==size-1)
	{
		rear=0;
		arr[rear]=s;
	}
	else
	{
		rear=rear+1;
		arr[rear]=s;
	}
}
void deletion()
{
if(rear==-1&&front==-1)
{
	cout<<"underflow"<<endl;
}
else if(front==rear)
{
	front=rear=-1;
	}	
	else if(front==size-1&&front!=rear)
	{
		front=0;
	}
	else
	{
		front=front+1;
	}
}
int main()
{
	insertion(5);
	insertion(10);
	insertion(15);
	insertion(20);
		insertion(25);
deletion();
		while(front!=rear)
		{
			cout<<arr[front]<<endl;
			front=front+1;
		}
		cout<<arr[front]<<endl;
	
}
