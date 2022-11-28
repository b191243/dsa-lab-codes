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
  
node *insertbegin(node *head,int x){
   node *nn=new node(x);
   if(head==NULL){
      head=nn;
   }
   else{
      nn->next=head;
      head=nn;
      } 
    return nn;
 }

void display(node *head){
  node*temp=head;
  if(head==NULL)
    return;
  cout<<temp->data<<"--->";
  display(temp->next);
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
  cout<<"enter the value to be inserted in begin:";
  int x;
  cin>>x;
  head=insertbegin(head,x);
  display(head);
  return 0;
 }
  
