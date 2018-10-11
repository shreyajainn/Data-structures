using namespace std;
#include<iostream>
#include<stack>
void bo(int arr[],int n)
{
	stack<int>s;
	int p,m,n1,w;
	for(int i=0;i<n;i++)
	{
		
	while(!s.empty()&&arr[i]>arr[s.top()])
		{
		p = s.top();
		s.pop();
					if(s.empty())
		break;
		m=i-s.top()-1;
		n1=min(arr[i],arr[s.top()])-arr[p];
		w+=m*n1;
		}

		s.push(i);

	}
cout<<w;
}
int main()
{
int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
int n = 12;
bo(arr,n);	
}
