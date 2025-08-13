#include<iostream>
using namespace std;

struct node{
 int data;
 node*next;
 node(int x){
  data=x;
  next=NULL;

 }
};

struct queue{
  node*front;
  node*rear;
  queue(){
    front=rear=NULL; 
  }
  
  void enque (int x){
    node*temp=new node(x);
    if(front==NULL){
      front=rear=temp;
      return;
    }
    rear->next=rear;
    rear=temp;
   }

   void deque (){ 
    if (front==NULL){
       return;
    }
    node*temp=front;
    front=front->next;
    delete temp;
   }

   void display(){
    node*temp=front;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl;

   }

};

int main()
{
  queue q;
  q.enque(10);
  q.display();
  return 0;

}