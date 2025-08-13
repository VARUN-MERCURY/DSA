#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
  node (int x){
    data=x;
    next=NULL;

  }
};

void ptrlist(node*head){
  node*curr=head;
  while(curr!=NULL){
    cout<<curr->data<<" ";
    curr=curr->next;
  }

}

node *delpos(node*head){
 
  node*curr=head;
  int pos=3;

  for(int i=1;i<pos-1;i++){
    curr=curr->next;   
  }

  curr->next=curr->next->next;
  return head;



}


int main(){
  node*head=new node(10);
  head->next=new node(20);
  head->next->next=new node(30);
  head->next->next->next=new node(40);
 

  head=delpos(head);
  ptrlist(head); 
  return 0;

}