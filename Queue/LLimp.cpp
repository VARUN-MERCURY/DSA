#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
  node(int x){
    data = x;
    next = NULL;
  }
};

struct queue{
  node* front;
  node* rear;

  queue(){
    front = NULL;
    rear = NULL;
  }

  void enque(int x){
    node* temp = new node(x);
    if(front == NULL){
      front = rear = temp;
      return;
    }
    rear->next = temp;
    rear = temp;
  }

  void deque(){
    if(front == NULL)
      return;
    node* temp = front;
    front = front->next;
    if(front == NULL){
      rear = NULL;
    }
    delete temp;
  }

  void display(){
    node* temp = front;
    while(temp != NULL){
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main(){
  queue q;
  q.enque(10);
  q.enque(20);
  q.enque(30);
  q.enque(40);
  q.enque(50);

  cout << "Queue after enqueuing 5 elements: ";
  q.display();

  q.deque();
  cout << "Queue after one dequeue: ";
  q.display();

  return 0;
}
