#include<iostream>
#include<string>

using namespace std;



struct Node{
    int  data;
    
    struct Node *left;
    struct Node *right;

    Node(int value){
        data=value;
        left=right=NULL;
    }
};


Node *create(Node *root,int val){
    if(root==NULL){
        Node *newnode=new Node(val);
        return newnode;
    }
    if(root->data>val){
        root->left=create(root->left,val);
    }
    else{
        root->right=create(root->right,val);
    }
    return root;

};

void inorder(Node *root){
    if(root==NULL)return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void preorder(Node *root){
    if(root==NULL)return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root){
    if(root==NULL)return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}


int main(){
    Node *root=NULL;
    int val;
    cout<<"Enter Values and -1 for break : ";
    while(cin>>val && val!=-1){
        root=create(root,val);
    }

    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder : ";
    postorder(root);

}
