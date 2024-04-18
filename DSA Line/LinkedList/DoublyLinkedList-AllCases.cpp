#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};

void display(Node *head){
	Node *temp=head;
	if(temp==NULL){
		cout<<"Linked List is empty.";
		return;
	}
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}



void insertionbeg(Node *&head,int data){
	Node *newnode=new Node;
	newnode->data=data;
	newnode->next=head;
	newnode->prev=NULL;
	
	head->prev=newnode;
	head=newnode;
}
void insertionmid(Node *head,int ele,int data){
	Node *newnode= new Node;
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=NULL;
	Node* tp;
	Node *temp=head;
	while(temp->data!=ele){
		tp=temp;
		temp=temp->next;
	}
	
	newnode->prev=temp;
	temp->next->prev=newnode;
	newnode->next=temp->next;
	temp->next=newnode;
	
}
void insertionend(Node* head,int data){
	Node *newnode=new Node;
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=NULL;
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	newnode->prev=temp;
	temp->next=newnode;
	head=temp;
	
}



void deletionbeg(Node *&head){
	head=head->next;
	head->prev=NULL;
}
void deletionmid(Node *head,int data){
	Node *temp=head;
	while(temp->data!=data){
		temp=temp->next;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
}
void deletionend(Node *head){
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->prev->next=NULL;
	free(temp);
}


int main(){
	struct Node *head,*newnode,*temp;
	head=0;
	int choice=1;
	while(choice){
		newnode=(struct Node*)malloc(sizeof(struct Node));
		cout<<"Enter Data : ";
		cin>>newnode->data;
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==0){
			head=temp=newnode;
		}
		else{
			while(temp->next!=NULL){
				temp=temp->next;
			}
            temp->next = newnode;
            newnode->prev = temp;

		}
		cout<<"\nWant to add more elements (0,1) : ";
		cin>>choice;
	}
	
	cout<<"==============================================\n\nLinked List is : ";
	display(head);
	cout<<"\n==============================================";
	
	
	
	int choice1;
	cout<<"\nDo you want edit Linked List \n1 for yes\n0 for no : ";
	cin>>choice1;
	while(choice1){
	cout<<"\n\nEnter Value \n1 for Insertion\n2 for Deletion : ";
	int a1;
	cin>>a1;
	if(a1==1){
		cout<<"\nTo Insert \n1 for beg\n2 for mid\n3 for end : ";
		int a2;
		cin>>a2;
		if(a2==1){
			int info;
			cout<<"Enter Data you want to insert : ";
			cin>>info;
			insertionbeg(head,info);
			cout<<"Updated Linked Is : ";
			display(head);
		}
		else if(a2==2){
			int info,element;
			cout<<"Enter Element after you want to Insert data : ";
			cin>>element;
			cout<<"\nEnter Data you want to insert : ";
			cin>>info;
			insertionmid(head,element,info);
			cout<<"Updated Linked Is : ";
			display(head);
		}
		else if(a2==3){
			int info;
			cout<<"Enter Data You want to insert : ";
			cin>>info;
			insertionend(head,info);
			cout<<"Updated Linked Is : ";
			display(head);
		}
	}
	else if(a1==2){
		cout<<"\nTo Delete \n1 for beg\n2 for mid\n3 for end : ";
		int a3;
		cin>>a3;
		if(a3==1){
			deletionbeg(head);
			cout<<"Updated Linked Is : ";
			display(head);
		}
		else if(a3==2){
			cout<<"Enter Element you want to delete : ";
			int info;
			cin>>info;
			deletionmid(head,info);
			cout<<"Updated Linked Is : ";
			display(head);
		}
		else if(a3==3){
			deletionend(head);
			cout<<"Updated Linked Is : ";
			display(head);
		}
	}
	cout<<"\nDo you want edit Linked List \n1 for yes\n0 for no : ";
	cin>>choice1;
	}
	cout<<"==============================================\n\nLinked List is : ";
	display(head);
	cout<<"\n==============================================";
}
