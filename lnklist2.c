#include<stdio.h>
#include<stdlib.h>

struct node{
 int data;
 struct node*next;
 };
 
 struct node*head=NULL;
 
 struct node*createnode( ){
  int val;
   struct node*nn;
   nn=(struct node*)malloc(sizeof(struct node));
   printf("Enter the value");
   scanf("%d",&val);
   nn->data=val;
   nn->next=NULL;
   return nn;
 }
 
 
 void creation( ){
 int n1;
 printf("Enter no. of nodes");
 scanf("%d",&n1);
 for(int i=1;i<=n1;i++){
 struct node*nn,*temp;
 nn=createnode();
 if(head==NULL){
  temp=head=nn;
  }
  else{
   temp->next=nn;
   temp=nn;
  }
  }
  }
 
struct node *insert_head(){
  int n2;
  struct node*nn ;
  printf("Enter no. of elements u want to insert at head");
  scanf("%d",&n2);
  for(int i=1;i<=n2;i++){
   nn=createnode( );
   if(head==NULL){
    head=nn;
    }
   else{
    
   nn->next=head;
   head=nn;
   }
 }
 return head;
 }
 void display(struct node *head ){
  struct node *temp;
  temp=head;
  while(temp->next!=NULL)
   { printf("%d ",temp->data);
     temp=temp->next;
   }
  printf("%d",temp->data);
  }
  
 int main( ){
  
  creation( );
  insert_head();
  display(head);
  return 0;
  }
  
