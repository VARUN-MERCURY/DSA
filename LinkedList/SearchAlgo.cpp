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

int search (node*head,int x){
  int pos =1;
  node*curr=head;

 while(curr!=NULL){
  
  if(curr->data==x){
    return pos;

  }
  else{
    pos++;
    curr=curr->next;
  }
}
return -1;
}




int main(){
  node*head=new node(10);
  head->next=new node(20);
  head->next->next=new node(30);
  head->next->next->next=new node(40);
 
  ptrlist(head); 
   int x=30;
   int position=search(head,x);

   if(position!= -1){
    cout<<"Element "<<x<<" found at pos: "<<position;

   }
   else{
    cout<<"Element "<<x<<" not found ";

   }

  return 0;

}