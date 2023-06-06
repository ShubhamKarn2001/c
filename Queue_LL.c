#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;

};
void insertion(struct node**rear,struct node**front,int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->next=NULL;
    n->data=data;
    if(*rear==NULL){
    *front=*rear=n;
    }
    else{
       n->next=*rear;
        *rear=n;
    }
    
   

}
int main(){
    
    struct node*S,*t;
    int choice=1,count=0;
    S=(struct node*)malloc(sizeof(struct node));
   struct node* rear=NULL,*front=NULL;
   
    while(choice){
        count++;
        printf("Enter the data :");
        scanf("%d",&S->data);
        insertion(&rear,&front,S->data);
        printf("fofr continue and discontinue press (0,1) :");
        scanf("%d",&choice);

    }
      t=rear;
      while(t!=front){
          printf("%d",t->data);
          t=t->next;
      }
    return 0;

}