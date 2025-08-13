#include<iostream>
 using namespace std;

 struct node{
  int data;
  node*next;
  node(int d){
    data=d;
    next=NULL;
  }
 };
 
 
 struct stack
  {
   
  node*top;
  int size;
  stack{
    top=NULL;
    size=0;

      }
  };

  void push(int x){
    node* new_node= new node(x);
    new_node->next=top;
    top=new_node;
    size++;



  }
  
  


 