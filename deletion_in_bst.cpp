using namespace std;
#include<iostream>
struct node
{
	int data;
	struct node*left=NULL;
	struct node *right=NULL;
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
	return root;
}
struct node * findmin(struct node* node) 
{ 
    struct node* current = node; 
    while (current->left != NULL) 
        current = current->left; 
  
    return current; 
} 
struct node *delete1(struct node *temp,int data)
{if(root==NULL)
return root;
else if(data<root->data)
{
	root->left=delete1(root->left,data);
}
else if(root->data<data)
{
	root->right=delete1(root->right,data);
}
	else
	{
if(root->left==NULL&&root->right==NULL)
{
delete(root);
root=NULL;	
}
else if(root->left==NULL)
{
	struct node *temp=root;
	root=root->right;
	delete(temp);
}
	else if(root->right==NULL)
{
	struct node *temp=root;
	root=root->left;
	delete(temp);
}
else
{
struct node*temp=findmin(root->right);
root->data=temp->data;
root->right=delete1(root->right,temp->data);	
}
}
return root;	
}
void traverse(struct node* node1) 
{ 
    if (node1 == NULL) 
        return; 
 traverse(node1->left);
   cout << node1->data << " "; 
traverse(node1->right);  
  
}
int main()
{
	int n;
	cin>>n;
	int data1;
	struct node *p=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>data1;
	struct node *temp=new struct node();
	temp->data=data1;
	temp->left=NULL;
	temp->right=NULL;
	p=insertnode(p,temp);
	}
	int p1;
	cin>>p1;
	traverse(root);
	root=delete1(root,p1);
	traverse(root);
}
