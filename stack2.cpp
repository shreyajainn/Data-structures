using namespace std;
#include<iostream>
int main()
{
	int arr[10]={0};
	int top=-1;
while(top<=9)
{	
	int ele;
	cin>>ele;
	if(top==9)
	{
		cout<<"overflow"<<endl;
	}
	else
	{
		top=top+1;
	}
	arr[top]=ele;
	}

	if(top==-1)
	{
		cout<<"underflow"<<endl;
	}
	else
	{
		cout<<arr[top];
	}
	top=top-1;

	}
