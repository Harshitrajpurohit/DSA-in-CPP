#include<iostream>

using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node *front=0;
struct Node *rear=0;

void enqueue(int x){
	Node *newnode=new Node;
	newnode->data=x;
	newnode->next=NULL;
	
	if(front==0 && rear==0){
		front=rear=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
}

void dequeue(){
	Node *newnode=front;
	front=front->next;
	free(newnode);
}

void display(Node *front){
	Node *temp=front;
	while(temp->data!=rear->data){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<temp->data<<endl;
	
}

int main(){
	enqueue(10);
	enqueue(20);
	enqueue(25);
	enqueue(45);
	
	display(front);
	
	dequeue();
	
	display(front);
}
