#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*prev;
    int data;
    struct node*next;
};

void insertAtfirst(struct node*tail,struct node* first,int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node*));
    n->data=data;
    tail->next=n;
    n->next=first;
    n->prev=tail;
    first->prev=n;
   
}
void insertAfter(struct node**t,struct node*temp,int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    if(temp==*t){
        if(temp->next==NULL){
            temp->next=n;
            n->prev=temp;
            n->next=temp;
            temp->prev=n;
            *t=n;
        }
        else{
            n->next=temp->next;
            temp->next=n;
            n->prev=temp;
            *t=n;
        }
    }
    else{
        n->next=temp->next;
        temp->next->prev=n;
        n->prev=temp;
        temp->next=n;
    }
}
struct node* search(struct node*tail,int data){
    struct node*temp,*null=NULL;
    temp=tail->next;
    do{
        if(temp->data==data)
        return temp;
        else
            temp=temp->next;

        }
        while(temp!=tail->next);
        if(temp==tail->next)
        return null;


    }

int main(){
    struct node*tail=NULL,*n,*temp,*first;
    int choice; while(choice){
    n=(struct node*)malloc(sizeof(struct node));
    n->prev=NULL;
    printf("Enter the value of data: ");
    scanf("%d",&n->data);
    n->next=NULL;
    if(tail==NULL){
        tail=temp=n;
        first=n;
    }
    else{
        tail=n;
        tail->prev=temp;
        temp->next=tail;
        temp=tail;
    }
    tail->next=first;
    first->prev=tail;
    printf("press for continue or discontinue(0,1) :");
    scanf("%d",&choice);

    }

    insertAtfirst(tail,first,6);
    insertAfter(&tail,search(tail,4),9);

     first=tail->next;
        temp=tail->next;
    while(temp->next!=first){
    printf("%d",temp->data);
    temp=temp->next;
    }
    printf("%d",temp->data);
   struct node*p= search(tail,8);
   printf("\n%d",p);
    return 0;
}