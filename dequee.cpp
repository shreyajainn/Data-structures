using namespace std;
#include<iostream>
int lft=-1;
int rght = -1;
int arr[34]={0};
int mx=5;
insertion_left1(int p)
{
	if(rght==mx-1&&lft==0)
	{
		cout<<"overflow"<<endl;
	}
	else if(lft==-1&&rght==-1)
	{
		lft=lft+1;
		rght=rght+1;
		arr[rght]=p;
	}
	else if(lft==rght+1)
	{
		cout<<"overflow"<<endl;
	}
	else if(rght==mx-1&&lft!=rght)
	{
		rght=0;
	}
	else
	{
		rght=rght+1;
		arr[rght]=p;
	}

}
insertion_right(int p)
{
if(left==-1&&right==-1)
{
	left=
	}	
	
}
deletoin()
{
lft=lft+1;	
}
traverse()
{
	while(lft!=rght)
	{
		cout<<arr[lft]<<endl;
		lft = lft+1;
	}
	cout<<arr[lft];
}
int main()
{
insertion_left1(12);
insertion_left1(121);insertion_left1(123);
insertion_left1(126);insertion_left1(126);insertion_left1(126);
traverse();

//insertion_right(34);	
}
