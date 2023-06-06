#include<stdio.h>
#include<stdlib.h>
//creating a singly linked list and printing its value and many of its function implementation

   struct nodes{
        int items;
        struct nodes*next;
    };
    //function to inser at first
       void insertAtfirst(struct nodes**head,int data){
           struct nodes*newnode;
       newnode=(struct nodes*)malloc(sizeof(struct nodes));
       newnode->items=data;
       newnode->next=*head;
       *head=newnode;
       

}
//function for inserting newnode after desired position
void insertAfter(struct nodes **head,int pos,int data){
    printf("\n");
    struct nodes *t1,*t2,*newnode;
    newnode=(struct nodes*)malloc(sizeof(struct nodes));
    newnode->items=data;
    newnode->next=0;
    int count=0;
    t1=*head;
    t2=0;
    while(count<pos){
        t2=t1;
        t1=t2->next;
        count++;
    }
    newnode->next=t1;
    t2->next=newnode;
}
int main(){
 
    struct nodes*head=0;
    struct nodes *newnode,*temp;//temp point is formed to traverse the whole list
   int choice;

   while(choice){
    newnode=(struct nodes*)malloc(sizeof(struct nodes));
   printf("Enter the value of data");
   scanf("%d",&newnode->items);
   newnode->next=0;
    if(head==0)
    head=temp=newnode;
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("Enter the choice for continue or exit(0,1)");
    scanf("%d",&choice);
   }
   //for printing its value
   temp=head;
   while(temp!=0){
    printf("%d",temp->items);
    temp=temp->next;   
   }
 printf("\n");
 printf("now modified avlue is");
insertAtfirst(&head,7);
//
 temp=head;
   while(temp!=0){
    printf("%d",temp->items);
    temp=temp->next;   
   }
   insertAfter(&head,2,9);
    temp=head;
   while(temp!=0){
    printf("%d",temp->items);
    temp=temp->next;   
   }
   return 0; 
}