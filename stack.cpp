#include<bits/stdc++.h>
using namespace std;

class Mystack{
public:
  int *arr;
  int c;
  int top;
  Mystack(int x){
  c=x;
  arr=new int[c];
  top=-1;
  }
  
  void push(int x){
  if(top==c-1){cout<<"The stack is full\n";}
  top++;
  arr[top]=x;
  }
  
  int pop(){
  if(top==-1){cout<<"The stack is empty\n";return top;}
  int res=arr[top];
  top--;
  return res;
  }
  
  int peek(){
  if(top==-1){cout<<"The stack is empty\n";return top;}
  return arr[top];
  }
  
  int size(){
  if(top==-1)cout<<"The stack is empty\n";return top;
  return top+1;
  }
  
  bool isEmpty(){
  return top==-1;
  }
  
  bool isFull(){
  return top;
  }

   void display(void){
   for(int i=0;i<top;i++){
    cout<<arr[i]<<" ";
    }
   cout<<endl;  
   }
 };
 
 int main(){
 Mystack s(5);
 s.push(5);
 s.push(10);
 s.push(15);
 s.push(25);
 s.push(65);
 s.display();
 cout<<s.peek()<<endl;
 cout<<s.size()<<endl;
 cout<<s.isEmpty()<<endl;
 cout<<s.isFull()<<endl;
 return 0;
 }
 
  
  
  
