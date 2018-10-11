#include<iostream>
using namespace std;
int main()
{
	int top=-1;
	int arr[10]={0};
	int ele;
	do{
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
	}while(top!=9);
	while(top!=-1)
	{
		cout<<arr[top];
		top=top-1;
	}
}
