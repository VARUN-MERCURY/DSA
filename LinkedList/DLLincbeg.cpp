#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
  node *prev;
  node (int x){
    data=x;
    next=prev=NULL;

  }
};

void ptrlist(node*head){
  node*curr=head;
  while(curr!=NULL){
    cout<<curr->data<<" ";
    curr=curr->next;
  }

}

node *incbeg(node*head,int x){
  node*curr=new node(x);

  curr->next=head;
  if (head!=NULL){
  head->prev=curr;
    }
  return curr;
  
   


}

int main(){
  node*head=new node(10);
  node*n2=new node(20);
  node*n3=new node(30);
  node*n4=new node(40);
  node*n5=new node(50);
  
  head->next=n2;
  n2->prev=head;
  n2->next=n3;
  n3->prev=n2;
  n3->next=n4;
  n4->prev=n3;
  n4->next=n5;
  n5->prev=n4;

 

  head=incbeg(head,69);
  ptrlist(head); 
  return 0;

}