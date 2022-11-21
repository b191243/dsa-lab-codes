#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node*next;
  };
 
struct node *head=NULL;
  
struct node*createnode(){
   int val;
   struct node*nn;
   nn=(struct node*)malloc(sizeof(struct node));
   printf("Enter the value");
   scanf("%d",&val);
   nn->data=val;
   nn->next=NULL;
   return nn;
   }
   
  
  void creation(){
  struct node*nn,*temp;
  int n;
  printf("Enter no.of nodes");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
  nn=createnode( );
  if(head==NULL){
    head=temp=nn;
    }
  else{
   temp->next=nn;
   temp=nn;
   }
   }
   
  
  }

  
  void display(struct node *head){
   struct node *temp;
   temp=head;
   while(temp->next!=NULL){
     printf("%d ",temp->data);
     temp=temp->next;
   }
   printf("%d",temp->data);
   }
  int main( ){
  creation();
  display(head);
  return 0;  
  }
