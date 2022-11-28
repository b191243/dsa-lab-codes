#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  node*next;
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

void sum(node *head){
  node*temp=head;
  int sum=0;
  while(temp!=NULL){
    cout<<temp->data<<"-->";
    sum+=temp->data;
    temp=temp->next;
  }
  cout<<endl<<"sum:"<<sum<<endl;
}
    
    
int main( ){
  node*temp,*nn;
  node* head=NULL;
  int i,n;
  cout<<"enter the value of n:";
  cin>>n;
  int a[n];
  cout<<"enter ur array:"<<endl;
  for(i=0;i<n;i++){
    cin>>a[i];
    }
  head=new node(a[0]);
  temp=nn=head;
  create(a,temp,nn,n);
  sum(head);
  return 0;
 }
  
