
#include<bits/stdc++.h>

using namespace std;


typedef struct node{
	int value;
	struct node *next;
}node;




void printlist(struct node *head){
	while(head!=NULL){
		cout << head->value << " ";
		head=head->next;
	}
	cout << endl;
}

void push(struct node **head, int data){
	struct node *newNode = (node*)malloc(sizeof(node));
	newNode->value=data;
	newNode->next=(*head);
	*head=newNode;
}


void addToLast(struct node *head, int data){
	struct node *newNode = (node*)malloc(sizeof(node));
	newNode->value = data;
	newNode->next=NULL;
	struct node *temp=head;
	if(temp==NULL)  
	{
		head=newNode;
		return;
	}

	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next=newNode;

}

int addNodeBottom( node *head, int val){

    //create new node
    node *newNode = (node*)malloc(sizeof(node));

    if(newNode == NULL){
        fprintf(stderr, "Unable to allocate memory for new node\n");
        exit(-1);
    }

	cout << "Ithe Aala" << endl;

    newNode->value = val;
    newNode->next = NULL;  // Change 1

	cout << "Ithe Aala" << endl;

    //check for first insertion
    if(head->next == NULL){
    	cout << "Ithe Aala" << endl;
        head->next = newNode;
        printf("added at beginning\n");
        
    }

    else
    {
        //else loop through the list and find the last
        //node, insert next to it
        node *current = head;
        while (true) { // Change 2
            if(current->next == NULL)
            {
                current->next = newNode;
                printf("added later\n");
                break; // Change 3
            }
            current = current->next;
        };
    }
    return 0;
}



int main(){

	cout << "Welcome to linked List." << endl;
	struct node* head=NULL;
	
	 node *newNode = (node*)malloc(sizeof(node));
	  newNode->value = 10;
    newNode->next = NULL;  // Change 1
	
	head= newNode;
	// push(&head, 2);
	// push(&head, 5);
	addNodeBottom(head , 2);
	addNodeBottom(head, 5);

	printlist(head);

	return 0;
}
