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

struct stk{  
node*head;
int cap;
  stk()
  {
    int cap=0;
    head=NULL;
  }

  void push(int x)
  {
    node*temp=new node(x); 
    temp->next=head;
   head=temp;
   cap++;
   cout<<"pushed value: "<<x<<endl;
  }

  int pop(){
    int val=head->data;
    
    node*temp=head;
    head=head->next;
     delete temp;
    cap--;
    return val;

  } 

  int peek(){

    return head->data;
  }

  int size(){
    return cap;

  }

  bool isEmpty(){

   return(head==NULL);
  }

};

void main(){
  stk s;
  
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);

  

  
}

