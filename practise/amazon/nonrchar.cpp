#include<bits/stdc++.h>
using namespace std;

typedef struct node{
	char val;
	node *next,*pre;
}node;

node *indll[260];
bool repeated[260];

void appendNode(node **head, node **tail,node *temp)
{	
	if(*head==NULL && *tail==NULL)
	{
		*head=*tail=temp;
	}
	(*tail)->next=(temp);
	(temp)->pre=(*tail);	
	(*tail)=(temp);
	return ;
}


void removeNode(node **head,node **tail,node *temp)
{	
	if(*head==NULL)
	{
		return;
	}
    if(*head==temp)
    {
    	*head=temp->next;
    }
    if(*tail==temp)
    {
    	*tail=temp->pre;
    }
    if(temp->next!=NULL)
    {
    	temp->next->pre=temp->pre;
    }
    if(temp->pre!=NULL)
    {
    	temp->pre->next=temp->next;
    }
    return ;
    
}


int main()
{
	char c;
	int i;
	string str="geeksforgeeks";
	node *head=NULL,*temp,*tail=NULL;
	
	head=NULL;
	for(i=0;i<260;i++)
	{
		repeated[i]=false;
	}
		
	for(i=0;i<260;i++)
	{
		indll[i]=NULL;
	}
	
	for(i=0;i<str.length();i++)
	{
		c=str[i];
		cout << c << endl;
		if(indll[c]==NULL && repeated[c]==false)
		{
			temp=(node*)malloc(sizeof(node));
			temp->val=c;		
			temp->next=NULL;
			temp->pre=NULL;
			indll[c]=temp;
			appendNode(&head,&tail,temp);					
		}		
		else if(indll[c]!=NULL && repeated[c]==false)
		{
			repeated[c]=true;
			removeNode(&head,&tail,indll[c]);
			indll[c]==NULL;							
		}	
		
		if(head!=NULL)
		{
			cout << "First Non Reapting Charater : "  << head->val << endl;
		}
	}
		return 0;
	
}
