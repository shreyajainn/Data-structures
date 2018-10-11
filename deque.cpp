using namespace std;
#include<iostream>
int left1=-1;
int right1=-1;
int arr[90]={0};
int size=7;
void right_insertion(int p)
{
	if((left1==-1 )&&(right1==-1))
	{
		left1=left1+1;
		right1=right1+1;
		arr[right1]=p;
	}
	else if((right1==size-1)&&left1==0)
	{
		cout<<"overflow"<<endl;
	}
	else if((right1==size-1)&&left1!=0)
	{
		right1=0;
		arr[right1]=p;
	}
	else if(left1==right1+1)
	{
	cout<<"overflow"<<endl;	
	}
	else
	{
		right1=right1+1;
		arr[right1]=p;
	}
	
}
int left_insertion(int k)
{
	if(left1==-1&&right1==-1)
	{
		left1=left1+1;
		right1=right1+1;
		arr[left1]=k;
	}
	else if(right1==size-1&&left1==0)
	{
		cout<<"overflow"<<endl;
	}
	else if( right1!=size-1&&left1==0)
	{
		left1=size-1;
		arr[left1]=k;
	}
	else if(right1==left1+1)
		{
			cout<<"overflow"<<endl;
		}
	else
	{
		left1=left1-1;
		arr[left1]=k;
	}
}
int left_deletion()
{

	
}
int right_deletion()
{
	
}
traverse()
{
left1=0;
{
	while(left1!=size-1)
	{
		cout<<arr[left1]<<endl;
		left1=left1+1;
	}
}
cout<<arr[left1]<<endl;
}
int main()
{
left_insertion(23);
left_insertion(36);
left_insertion(21);	
 right_insertion(788);
  right_insertion(123);
   right_insertion(456);

traverse();
}
