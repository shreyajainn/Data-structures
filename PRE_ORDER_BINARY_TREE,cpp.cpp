#include<iostream>
using namespace std;
struct node
{
	struct node *left;
	int data;
	struct node *right;
}*root=NULL;

struct node *insertnode(struct node *root,struct node *temp)
{

	if(root==NULL)
	{
		root=new node;
		root->data=temp->data;
		root->left=NULL;
		root->right=NULL;  
	}
	else if(root->data<temp->data)
	{
		if(root->right==NULL)
		{
		root->right=temp;
		root->right->left=NULL;
		root->right->right=NULL;
	    }
		else
		{
			insertnode(root->right,temp);
		}
    }
    else if(root->data>temp->data) 
    {
		if(root->left==NULL)
		{
		root->left=temp;
		root->left->left=NULL;
		root->left->right=NULL;
		}
	  else
	  {
		insertnode(root->left,temp);
	  }
    }
return root;
}
void traverse(struct node* node1) 
{ 
    if (node1 == NULL) 
        return; 
     cout << node1->data << " "; 
     traverse(node1->left);
	 traverse(node1->right);  
 
 
}
int main()
{
	int data1;
	struct node *temp,*p=NULL;
	for(int i=0;i<5;i++)
	{
	cin>>data1;
	struct node *temp=new struct node();
	temp->data=data1;
	temp->left=NULL;
	temp->right=NULL;
	p=insertnode(p,temp);
    }
    traverse(p);
}
