#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	int val;
	node *left,*right;
}node;

int sumOdd=0;
int sumEven=0;

node* newnode(int v)
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->val=v;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

int  getSum(node *root)
{
	if(root==NULL)return 0;
	return root->val-getSum(root->left)-getSum(root->right);	
}


int main()
{	
	node *root=newnode(3);	
	root->left=newnode(5);
	root->right=newnode(4);

	cout << abs(getSum(root)) << endl;	
	return 0;
}
