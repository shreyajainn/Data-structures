using namespace std;
#include<iostream>
#include<stack>
	stack<int>s;
	stack<int>s2;

void deletion()
	{
		int p=0;
		if((!s.empty())||s2.empty())
		{
		while(!s.empty())
		{
			p=s.top();
			s.pop();
			s2.push(p);
			
		}
		s2.pop();
		return s2;
	}
	else
	{
		/*while(!s2.empty())
		{
			p=s2.top();
			s2.pop();
			s.push(p);
		}*/
		s2.pop();	
		return s2;
	}
	}
int main()
{
//stack<int>k;
s.push(3);
s.push(31);
s.push(23);
s.push(45);
s.push(37);
deletion();
/*k=deletion();
k=deletion();
k=deletion();*/
if(s.empty())
{
	
	k.push(100);

	}
else
{
	s2.push(100);
}
while(!k.empty())
{
	cout<<k.top()<<endl;
	k.pop();
}
	
}
