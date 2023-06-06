#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*prev;
    int item;
    struct node* next;
};
 
void insertAtFirst(struct node**start,int data){
    struct node *temp,*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->prev=NULL;
    n->next=NULL;
    temp=*start;
    if(*start==NULL)
    *start=temp=n;
    else{
      temp->prev=n;
      n->next=temp;
      *start=n;  

    }
    
}
int main(){
    struct node*n,*start,*t;
    int choice;
    start=NULL;
    while(choice){
    n=(struct node*)malloc(sizeof(struct node));
    n->prev=NULL;
    printf("enter the data\n");
    scanf("%d",&n->item);
    n->next=NULL;
    if(start==NULL){
    start=t=n;
    t->prev=&start;}
    else{
        t->next=n;
        n->prev=t;
        t=t->next;
        
    }
    printf("for continuing and discontinue press (o or 1) ");
    scanf("%d",&choice);
    }
    insertAtFirst(&start,9);
    t=start;
    while(t!=NULL){
        printf("%d",t->item);
        t=t->next;
    }
getch();
    return 0;
}