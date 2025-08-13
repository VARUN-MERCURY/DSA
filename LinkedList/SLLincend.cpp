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

node *incend(node*head,int x){
  node*curr=new node(x);
  
  node*temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
   }

   temp=curr;
   return head;
  

}

int main(){
  node*head=new node(10);
  head->next=new node(20);
  head->next->next=new node(30);
  head->next->next->next=new node(40);
 

  head=incend(head,5);
  ptrlist(head); 
  return 0;

}