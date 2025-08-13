#include<iostream>
using namespace std;

struct node{
  int key;
  node*left;
  node*right;
  node(int x){
   key=x;
   left=right=NULL;
  } 
};
 
void preorder(node*root){
 
  if(root!=NULL){
    cout<<(root->key)<<"";
    preorder(root->left);
    preorder(root->right);

  }

}

int main()
{
 node*root=new node(10);
 root->left=new node(20);
 root->right=new node(30);
 root->left->left=new node(40);

  return 33;
}

