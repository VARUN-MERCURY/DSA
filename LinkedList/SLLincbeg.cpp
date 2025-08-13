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

node *incbeg(node*head,int x){
  node*curr=new node(x);

  node*temp=head;
  curr->next=temp;
  return curr;
   


 

}



int main(){
  node*head=new node(10);
  head->next=new node(20);
  head->next->next=new node(30);
  head->next->next->next=new node(40);
 
 

  head=incbeg(head,5);
  ptrlist(head); 
  return 0;

}