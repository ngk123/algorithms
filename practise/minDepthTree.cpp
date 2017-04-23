#include<bits/stdc++.h>

using namespace std;

typedef struct node{
	struct node *left, *right;
	int value;
}node;

typedef struct qEntry{
	node *root;
	int depth;	
}qEntry;



int minDepth(node *root){
	
	queue<qEntry> queueN;
	qEntry qe,tempE;
	int depth=1;
	if(root!=NULL){
		qe.root=root;
		qe.depth=depth;
		queueN.push(qe);
	}
	while(!queueN.empty()){		
		tempE=queueN.front();
		queueN.pop();
		if(tempE.root->right==NULL && tempE.root->left==NULL)return tempE.depth;
		
		else if(tempE.root->right!=NULL){
			qe.root=tempE.root->right;
			qe.depth=tempE.depth+1;
			queueN.push(qe);
		}		
			else if(tempE.root->left!=NULL){
			qe.root=tempE.root->left;
			qe.depth=tempE.depth+1;
			queueN.push(qe);
		}			
	}
	
	return depth;

}



node* createNewNode(int data){
	node *temp= new node;
	temp->value=data;
	temp->left=NULL;
	temp->right=NULL;
	return (temp);	
}

int main(){
	
	node *root = createNewNode(1);
	root->left = createNewNode(2);
	root->right = createNewNode(3);
	root->right->right = createNewNode(6);
	root->left->left = createNewNode(4);
	root->left->right = createNewNode(5);
	
	cout << minDepth(root) << endl;
	
	return 0;
}
