ousing namespace std;
#include<iostream>
#include<stack>
/*int main()
{
	string p=" ";
	cin>>p;
	int a,b,k,l ;
	stack<char>s;
	for(int i=0;i<p.length();i++)
	{
		if(p[i]>='0'&&p[i]<='9'){
			s.push(p[i]);	}
		else if(p[i]=='*'||p[i]=='/'||p[i]=='+'||p[i]=='-'){
			a=s.top()-'0';
			l =s.top()-'0';
			s.pop();
			b=s.top()-'0';
			s.pop();
			switch(p[i])
			{
				case '*':
					k=b*a;					
					break;
					case '+':
						k=b+a;			
						break;
						case '-':
							k = b-a;							
							break;
							case '/':
								k = b/a;							
								break;
						
			}
			s.push(k+'0');
		}
	}
cout<<k;

}*/
	stack<char>st;
	string ns;
char insert_at_bottom(char x)
{
 cout<<st.size()<<endl;
    if(st.size() == 0)
    st.push(x);
 
    else
    {
		char a = st.top();
        st.pop();
        insert_at_bottom(x);
 		st.push(a);
    }
}

char reverse()
{
    if(st.size()>0)
    {
        char x = st.top();
        st.pop();
        reverse();
        cout<<x<<endl;
        insert_at_bottom(x);
    }
}
 
int main()
{
	
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
     
    cout<<"Original Stack"<<endl;
    cout<<"1"<<" "<<"2"<<" "
        <<"3"<<" "<<"4"
        <<endl;
    reverse();
    cout<<"Reversed Stack"
        <<endl;
     

    while(!st.empty())
    {
        char p=st.top();
        st.pop();
        ns+=p;
}
    cout<<ns[3]<<" "<<ns[2]<<" "
        <<ns[1]<<" "<<ns[0]<<endl;
    return 0;
}
 

