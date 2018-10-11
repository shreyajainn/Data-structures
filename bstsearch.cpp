using namespace std;
#include<iostream>
struct node
{
	int data;
	struct node *left;
	struct node *right;
}*root=NULL;
struct node *insertnode(struct node *root,struct node *t)
{
	if(root==NULL)
	{
		root=new node;
		root=t;
	}
	else if(root->data>t->data)
	{
			if(root->left==NULL)
		{
			root->left=t;
			t->left=NULL;
			t->right=NULL;
		}
		else
		{
			insertnode(root->left,t);
		}	
	}
	else if(root->data<t->data)
	{
		if(root->right==NULL)
		{
			root->right=t;
			t->left=NULL;
			t->right=NULL;
		}
		else
		{
			insertnode(root->right,t);
		}
	}
return root;		
}
struct node *k=NULL;
void search(struct node *node1,int k)
{
	    if (node1->data == k) 
    	cout<<"element found";
    else if(k<node1->data&&node1->left!=NULL)
 		search(node1->left,k);
   else if(k>node1->data&&node1->right!=NULL)
	 	search(node1->right,k);
	 else
	 	cout<<"elemnt not found";
}

void deletion(struct node* node1) 
{ 
   if(node1->left==NULL&&node1->right==NULL) 
   {
   	k->left=NULL;
   }
   else
   {
   	k=node1;
    deletion(node1->left);
   }
}
void traverse(struct node* node1) 
{  
			struct node *p=node1;
   			 if (p == NULL) 
        		return;
			traverse(p->left);
			cout << p->data << " "; 
   			traverse(p->right);  
}
	int main()
{
	struct node *p=NULL;
	for(int i =0;i<6;i++)
	{
		struct node *temp=new struct node();
		cin>>temp->data;
		temp->left=NULL;
		temp->right=NULL;
		p=insertnode(p,temp);
	}
	int k;
	cin>>k;
	search(p,k);
	deletion(p);
	traverse(p);
}
