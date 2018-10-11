using namespace std;
#include<iostream>
int top=-1;
char arr[20]={'\0'};
class stack1
{
    public:
void push(char p,int len)
{
	if(top==len-1)
	{
    cout<<"overflow"<<endl;
	}
	else
	{
		top=top+1;
		arr[top]=p;

	}


}
void pop()
{
	if(top!=-1)
	{

		top=top-1;
	}
}
};
int main()
{
    int flag=0;
stack1 s;
string p;
cin>>p;
int k=p.length();
for(int i=0;i<p.length();i++)
{
if(p[i]=='{'||p[i]=='['||p[i]=='(')
{
s.push(p[i],k);
}
if(p[i]=='}'||p[i]==']'||p[i]==')')
{
if((arr[top]=='{' && p[i]=='}')||(arr[top]=='[' && p[i]==']')||(arr[top]=='(' && p[i]==')'))
{
s.pop();
flag=1;
}
else
{
flag=0;
break;
}
}
}
if(flag==0)
{
cout<<"invalid"<<endl;
}
else
{
cout<<"valid"<<endl;
}
}
