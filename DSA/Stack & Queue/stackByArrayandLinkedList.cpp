#include<iostream>
using namespace std;

// Stack By Array
/*
#define size 10
int stack[size];
int top=-1;

void push(int data){
	if(top==size-1){
		cout<<"stack overflow.";
	}else{
		top=top+1;
		stack[top]=data;
	}
}

void pop(){
	if(top==-1){
		cout<<"stack overflow.";
	}
	else{
	cout<<"Deleted Num is : "<<stack[top];
	top=top-1;
	}
}

void display(){
	cout<<"Stack is : ";
	for(int i=top;i>=0;i--){
		cout<<stack[i]<<" ";
	}
}


int main(){
	int choice=0;
	while(choice!=4){
		cout<<"\nfor insertion 1 for deletion 2 for display 3 for exit  4 : ";
		cin>>choice;
		if(choice==1){
			int data;
			cout<<"enter data you want to insert : ";
			cin>>data;
			push(data);
		}
		else if(choice==2){
			pop();
		}
		else if(choice==3){
			display();
		}
		else if(choice==4){
			cout<<"\nExit.";
		}
		else{
			cout<<"\nEnter valid Number.";
		}
	}

	cout<<"Final Stack is : ";
	for(int i=top;i>=0;i--){
		cout<<stack[i]<<" ";
	}
}

*/




// stack by linked list

struct Node{
	int data;
	struct Node* next;
};

Node *head=NULL;

void push(){
	int ele;
	cout<<"enter element you want to insert : ";
	cin>>ele;
	Node *newnode=new Node;
	newnode->data=ele;
	newnode->next=head;
	head=newnode;
	cout<<"Element pushed.\n";
}

void pop(){
	if(head==NULL){
		cout << "Stack is empty." << endl;
	}
	else{
	head=head->next;
	cout<<"Element Poped.\n";
	}
}


void display(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}



int main() {
    int choice = 0;
    while (choice != 4) {
        cout << "1 for insert, 2 for delete, 3 for display, 4 to exit: ";
        cin >> choice;
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display(head);
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}


