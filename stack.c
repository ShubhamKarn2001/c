#include<stdio.h>
#include<stdlib.h>
struct stack{
    int capacity;
    int top;
    int *ptr;
};
void push(struct stack*S,int data){
    if(S->top==S->capacity-1)
    printf("stack overflow");
    else{
        S->top+=1;
        S->ptr[S->top]=data;
    }

}
void pop(struct stack*S){
    if(S->top==-1)
    printf("stack empty");
    else{
        S->top-=1;
    }
}
int peak(struct ) 
int main(){
struct stack*S;
int cap;
S=(struct stack*)malloc(sizeof(struct stack));
S->top=-1;
printf("Enter the capacity: ");
scanf("%d",&cap);
S->ptr=(int*)malloc(sizeof(int)*cap);


}