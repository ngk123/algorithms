#include<bits/stdc++.h>
using namespace std;

typedef struct node{
int val;
node* next;
}node;


node* createNode(int v)
{
	node* n;
	n=(node*)(malloc(sizeof(node)));
	n->val=v;
	n->next=NULL;
	return n;
}

void deleteDup(node* n)
{
  // map<int,bool> occur;
	map<int,bool> occur;
	node* temp=n;
	node* pre=NULL;
	//cout << "sfsdfdf\n";
		
	while(n!=NULL)
	{
		if(occur.find(n->val)!=occur.end())
		{	
			cout << n->val << endl;
			pre->next=n->next;
			free(n);
			n=pre->next;		
		}
		else
		{
			occur[n->val]=true;
			pre=n;
			n=n->next;
		}	
	}
	cout << "After Removal of Duplicate : \n";
	while(temp!=NULL)
	{
		cout << temp->val << endl;	
		temp=temp->next;	
	}	
	
	return ;		
}

int main()
{
	int i,v2;
	node* n;
	node* temp;
	v2=0;
	temp=createNode(v2);
	n=temp;
	//temp=n;
	for(i=1;i<13;i++)
	{
		v2=i%5;
		temp->next=createNode(v2);		
		temp=temp->next;
	}
	temp=n;
	while(temp!=NULL)
	{
		cout << temp->val << endl;	
		temp=temp->next;	
	}	
	deleteDup(n);	
	
	return 0;

}
