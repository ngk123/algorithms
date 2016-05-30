#include<bits/stdc++.h>
using namespace std;

typedef struct node{
	int val;
	node* next;
}node;


void push(node** b, int v)
{
	node* temp=(node*)malloc(sizeof(node));
	temp->val=v;
	temp->next=(*b);
	(*b)=temp;
	//return b;	
}

void printNode(node* a)
{
	while(a!=NULL)
	{
		cout << a->val << " ";
		a=a->next;
	}
	return ;
}

int main()
{
node *a;
a=NULL;
push(&a,1);
push(&a,3);
push(&a,2);
printNode(a);
return 0;
}

