#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *next;  
  Node(int x){
    data=x;
    next=NULL;
  }
};  
  struct Mystack{
  Node *head;
  int sz;
  Mystack(int x){
   head=NULL;
   sz=0;
  }
  void push(int x){
  Node *temp=new Node(x);
  temp->next=head;
  head=temp;
  sz++;
  }
  
  int pop(){
  if(head==NULL){cout<<"stack is empty";}
  int res=head->data;
  Node *temp=head;
  head=head->next;
  delete(temp);
  sz--;
  return res;
  }
  
  int peek(){
  if(head==NULL)return head->data;return head->data;}
  
  void display(){
  Node *head;
  Node*temp=head;
  if(head==NULL){cout<<"stack is empty";}
  while(temp!=NULL){
  cout<<temp->data<<" ";
  temp=temp->next;
  }
  }
 };
  
  int main(){
  Mystack s(10);
  s.push(5);
  s.push(10);
  s.push(15);
  s.push(20);
  cout<<s.peek()<<" ";
  cout<<s.pop()<<" ";
  cout<<s.pop()<<" ";
  return 0;
  }
  
  
