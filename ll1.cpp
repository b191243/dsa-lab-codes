#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  node* next;
  node(int x){
    data=x;
    next=NULL;
  }
};

void create(int *a,node *temp,node *nn,int n){
  for(int i=1;i<n;i++){
    nn=new node(a[i]);
    temp->next=nn;
    temp=nn;
   }
  temp->next=NULL;
}

void count(node*head){
  int count=0;
  node *temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"-->";
    count+=1;
    temp=temp->next;
    
  }
  cout<<endl<<"count:"<<count<<endl;
}   

int main(){
  node *head=NULL,*nn,*temp;
  int i,n;
  cout<<"enter the no. of nodes:"<<endl;
  cin>>n;
  int a[n];
  cout<<"enter ur array:"<<endl;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  head=new node(a[0]);
  temp=nn=head;
  create(a,temp,nn,n);
  count(head);
  return 0;
}
  
