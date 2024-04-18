// You are using GCC
#include<iostream>

using namespace std;

#define size 10
int a[size];
int front = -1;
int rear = -1;

class queue{
   public:
   void push(int data){

       if(rear==size-1){
           cout<<"queue overflow.";
       }
       if(front==-1 && rear==-1){
           rear=front=0;
       }
       else{
           rear=rear+1;
       }
       a[rear]=data;
   }
   void pop(){
       if(front==-1){
           cout<<"queue underflow.";
       }
       int value=a[front];
       if(front==rear){
           front=rear=-1;
       }
       else{
           front=front+1;
       }
   }
   void display(){
       for(int i=front;i<rear+1;i++){
           cout<<a[i]<<" ";
       }
   }
};



int main(){
   queue q1;
   q1.push(10);
   q1.push(20);
   q1.push(30);
   cout<<endl;
   q1.display();
   cout<<endl;
   q1.pop();
   q1.display();
}






