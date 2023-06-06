#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int capacity;
    int front;
    int rear;
    int*ptr;
};
void insert(struct Queue*Q,int data){
    if(Q->rear==Q->capacity-1 && Q->front==0||Q->rear+1==Q->front)
    printf("overflow");
    else if(Q->rear==-1){
        Q->rear=0;
        Q->front=0;
        Q->ptr[Q->rear]=data;
    }

    else if(Q->rear==Q->capacity-1)
    {Q->rear=0;
     Q->ptr[Q->rear]=data;
    }
    else{
       Q->rear++;
       Q->ptr[Q->rear]=data; 
    }

  
}
void delete(struct Queue*Q){
    if(Q->rear==-1)
    printf("Underflow");
    else if(Q->rear== Q->front){//case of single elementq
        Q->front=-1;
        Q->rear=-1;
    }

    else if(Q->front==Q->capacity-1)
    {Q->front=0;

    }
    else{
        Q->front++;
    }
}
int main(){
    struct Queue*Q;
        int data,choice=1,cap,n;
    Q=(struct Queue*)malloc(sizeof(struct Queue));
     printf("enter capacity of Queue :");
    scanf("%d",&cap);
    Q->capacity=cap;
    Q->front=-1;
    Q->rear=-1;
 
    Q->ptr=(int*)malloc(sizeof(int)*(Q->capacity));
 while(choice){
    printf("press\n1- for insertion\n2- for deletion\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    printf("Enter the value of data");
        scanf("%d",&data);
        insert(Q,data);
        break;
    case 2:
    delete(Q);
    break;
    default:
    printf("invalid");
       
    }
          
        printf("press for continue or discontinue (0,1) :");
        scanf("%d",&choice);
    }
   
  
    printf("values are:");
    if(Q->rear>=Q->front){
    for (int i =Q->front; i <=Q->rear; i++)
    {
        printf("%d ",Q->ptr[i]);
    }
    }
    else
    {
    for (int i =Q->rear; i <=Q->front+1; i++)
    {
        printf("%d ",Q->ptr[i]);
    }
    }
    
    return 0;

}
