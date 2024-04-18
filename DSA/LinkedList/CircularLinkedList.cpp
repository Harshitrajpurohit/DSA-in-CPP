#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};

void display(Node *head){
	Node *temp;
	temp=head;
	while(temp->next!=head){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
		cout<<temp->data<<" ";
		temp=temp->next;
}

int main(){
	struct Node* head,*newnode,*temp;
	head=0;
	int choice=1;
	
	while(choice){
		newnode=(struct Node*)malloc(sizeof(struct Node));
		cout<<"Print data : ";
		cin>> newnode->data;
		newnode->next=0;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
			newnode->next=head;
		}
		cout<<"Do you want to continue(0,1)? ";
		cin>>choice;
	}
	
	cout<<"Main Liinked List is : ";
	display(head);
}
