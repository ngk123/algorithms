#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct node{
int value;
node *next;
}node;

void printLinkedList(node* ll){
	while(ll !=NULL){
		cout << ll->value << endl;
		ll=ll->next;
	}
}


int main(){
	
	node* first;
	node* second;
	node* third;
	first=(node*)malloc(sizeof(node));
	second=(node*)malloc(sizeof(node));
	third=(node*)malloc(sizeof(node));
	
	first->value=3;
	first->next=second;
	second->value=2;
	second->next=third;
	third->value=1;
	third->next=NULL;
	
	printLinkedList(first);
		
	return 0;
}



