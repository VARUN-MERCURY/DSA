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
  
  
if(head==NULL){
  return;
}

cout<<head->data<<" ";
for(node*p=head->next;p!=head;p=p->next){
  cout<<p->data<<" ";
}

}

node* incbeg(node*head,int x){

  node*temp=new node(x);
  
  if(head==NULL){
    temp->next=temp;
    }

  else{
    node*curr=head;
    while(curr->next!=head){
      curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
  }
  return temp;


}



int main(){
  node*head=new node(10);
  head->next=new node(20);
  head->next->next=new node(30);
  head->next->next->next=new node(40);
  head->next->next->next->next=head;
 
 
head=incbeg(head,69);
  ptrlist(head); 
  return 0;

}