#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* search(struct node*head,int data){
    struct node*t;
    t=head;
    while(t->data!=data){
        t=t->next;
    }
    return t;
}
void deleteAfter(struct node**head,struct node*t){
    struct node*r;
    r=*head;
    if(r==t){
    free(t);
    *head=NULL;}
    else{
        while(r->next!=t)
            r=r->next;
            r->next=t->next;
            free(t);
        
    }

}
void insertAfter(struct node*t,int newdata){
struct node* n;
n=(struct node*)malloc(sizeof(struct node));
n->data=newdata;
n->next=NULL;
n->next=t->next;
t->next=n;
}

int main(){
     struct node*head,*temp,*newnode;
     head=NULL;
     int choice;
     while(choice){
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("enter the value of data \n ");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     //temp=newnode;
    if(head==NULL)
    head=temp=newnode;
    else{
    temp->next=newnode;
    temp=newnode;  }  
     printf("for continuing and discontinue press (0,1)");
     scanf("%d",&choice);
     
     }
     insertAfter(search(head,3),9);
    //struct node*add= search(head,3);
   // printf("\n add is %d",add);
   deleteAfter(&head,search(head,4));
     temp=head;
     while(temp!=NULL){
     printf("%d",temp->data);
         temp=temp->next;

     }


return 0;
}