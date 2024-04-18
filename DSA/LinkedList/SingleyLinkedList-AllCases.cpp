#include<iostream>

using namespace std;

struct Node{
	int data;
	struct Node *next;
};

void display(Node *node){
	while(node!=NULL){
		cout<< node->data<<" ";
		node=node->next;
	}
}

void insertionbeg(Node *&head,int data){
	Node *newnode= new Node;
	newnode->data=data;
	newnode->next=head;
	head=newnode;
}


void insertionmid(Node *head,int ele,int data){
	Node *newnode = new Node;
	newnode->data=data;
	newnode->next=NULL;
	Node *temp=head;
	while(temp->data!=ele){
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;	
}


void insertionend(Node *head,int data){
	Node *newnode=new Node;
	newnode->data=data;
	newnode->next=NULL;
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
}

void deletionbeg(Node *&head){
	head=head->next;

}

void deletionend(Node *head){
	Node *temp=head;
	Node *prev;
	while(temp->next!=NULL){
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	free(temp);
}

void deletionmid(Node *head,int ele){
	Node *temp=head;
	Node *prev;
	while(temp->data!=ele){
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	free(temp);
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
		}
		cout<<"Do you want to continue(0,1)? ";
		cin>>choice;
	}
	
	cout<<"\nMain Linked LIst : ";
	display(head);
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
}



