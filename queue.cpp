using namespace std;
#include<iostream>
#include<queue>
int rear=-1;
int front=-1;
int size=5;
int q[5];
void insertion(int c)
{
		
		if(rear==-1 && front==-1)
	{
		front+=1;
		rear+=1;
		q[rear]=c;
	}
	else if(rear==size-1)
	{
		cout<<"overflow"<<endl;
	}
	else
	{
		rear=rear+1;
		q[rear]=c;
	}
}
void deletion()
{
		if(rear==front==-1||front>rear)
	{
		cout<<"underflow"<<endl;
	}
	else 
	{
	
		front=front+1;
	}

}

int main()
{

insertion(5);
insertion(55);
insertion(25);
insertion(35);
deletion();



while(front!=rear)
{
	cout<<q[front]<<endl;
	front=front+1;
}
cout<<q[front];
}
	
