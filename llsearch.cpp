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

void display(node*head){
  node*temp=head;
  while(temp!=NULL){  
    cout<<temp->data<<"-->";
    temp=temp->next;
    }
 }  
 int search(node *head,int ele){
  node*temp=head;
  int pos=1;
  while(temp!=NULL){
    if(temp->data==ele)
        return pos;
    else{
       pos+=1;
       temp=temp->next;
     }
   }
  return -1;
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
  display(head);
  int ele;
  cout<<endl<<"enter the element to be searched"<<endl;
  cin>>ele;
  int srch,pos;
  srch=search(head,ele);
  cout<<"pos:"<<srch;
  return 0;
 }
  
