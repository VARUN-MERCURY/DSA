#include<iostream>
using namespace std;

struct stack{
  int *arr;
  int cap;
  int top;
  stack(int c){
    cap=c;
    arr=new int[cap];
    top=-1;
  }

   void push(int x)
   {
    if (top==cap-1){
     cout<<"stk overflow";
      return;
    }

     top++;
     arr[top]=x;
     
  
    }

    int pop()
    {
       int result= arr[top];
       top--;
       return result;
      }

     

     int peek(){
      if (top==-1){
        cout<<"stack overflow";
      }

      return arr[top];
     }
     int size(){
      return (top+1);

     }

     bool isEmpty(){
      return (top==-1);

     }

};

int main(){
  stack s(5);
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);


  
  cout<<s.isEmpty();
  

  return 0;
}