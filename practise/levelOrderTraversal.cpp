#include<cstdlib>
#include<cstdio>
#define MAX_SIZE_Of_Queue 500




typedef struct node{
	int val;
	node* left;
	node* right;
}node;

node** createQueue(int* front, int* rear)
{
	node** que=(node**)malloc(sizeof(node*)*MAX_SIZE_Of_Queue);
	*front=*rear=0;
	return que;
}

void enque(node** queue, node* root, int* rear)
{
	queue[(*rear)]=root;
	(*rear)++;
	return;
}
node* deque(node** queue, int* front)
{
	node* temp;
	temp=queue[(*front)];
	(*front)++;
	return temp;
}

void levelOrder(node* tree)
{
	int rear,front,count;
	count=0;
	node* temp=tree;
	node **que;
	que=createQueue(&front,&rear);
	while(temp)
	{
		printf("%d ",temp->val);
		count++;
		if(count%2==1)
		{
			if(temp->left!=NULL)
			{
				enque(que,temp->left,&rear);		
			}	
			if(temp->right!=NULL)
			{
				enque(que,temp->right,&rear);		
			}
		}
		else
		{
			if(temp->right!=NULL)
			{
				enque(que,temp->right,&rear);		
			}
			if(temp->left!=NULL)
			{
				enque(que,temp->left,&rear);		
			}
		
		
		
		}	
		
		temp=deque(que,&front);
				
	}
	
	

}

node* createNode(int a)
{
	node* temp;
	temp=(node *)malloc(sizeof(node));
	temp->val=a;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

void printInOrder(node* tree)
{
	if(tree==NULL)return;
	if((tree->left)!=NULL)  printInOrder(tree->left);
	printf("%d ",tree->val);
	if((tree->right)!=NULL)  printInOrder(tree->right);
	//return 0;

}

int main()
{
	node* tree,temp;
	tree=createNode(1);
	tree->left=createNode(2);
	tree->right=createNode(3);
	tree->left->left=createNode(4); 
	tree->left->right=createNode(5);	
	printf("\nPrinting of the tree in InOrder\n");
	printInOrder(tree);
	printf("\nPrinting of the tree in LevelOrder\n");
	levelOrder(tree);
	printf("\n");
	return 0;
}
