#include<stdio.h>
#include<stdlib.h>
struct Array{
    int capacity;
    int lastindex;
    int *ptr;
};
struct Array* createArray(int cap ){
    struct Array *arr;//if we make here variable a1,which is sma ,when function call end it also get destroy therefore here we make dma variable of datatype struct Array, for making dma variable we have to make pointer
  arr=(struct Array*)malloc(sizeof(struct Array));
  arr->capacity=cap;
  arr->lastindex=-1;
  arr->ptr=(int*)malloc(sizeof(int)*cap);

  return arr;
}
//function for insertion
void insert (struct Array *arr,int index,int data ){//here we use arr variable without allocating its memory dynamically because inside arr variable we input address which point the atuct variable 
  if(index<0 || index>arr->lastindex+1)
    printf("invalid");
    else if(arr->lastindex==arr->capacity-1)
    printf("overflow");

  else {
  for (int i = arr->lastindex; i >=index; i--)
  {
   arr->ptr[i+1]=arr->ptr[i];
  }
  arr->ptr[index]=data;
  arr->lastindex+1;
}
}
//funtion to append
void append(struct Array *arr,int data){
  if(arr->lastindex==arr->capacity-1)
  printf("appending not possible");
  else { 
  arr->ptr[arr->lastindex+1]=data;
  arr->lastindex+=1;
  }
}
//for deletion
void delete(struct Array*arr,int index){
  if(index<0||index>=arr->lastindex)
  printf("invalid index");
  else {
    for (int i = index; i <=arr->lastindex-1; i++)
    {
    arr->ptr[i]=arr->ptr[i+1];
    }
    arr->lastindex-=1;
    
  }
}
//funtion for view
void view(struct Array*arr){
  for (int i = 0; i <=arr->lastindex; i++)
  {
    printf("%d ",arr->ptr[i]);
  }
  
}
void edit(struct Array *arr,int index,int data){
  printf("\n after editing the obtained output is");

  if(index<0||index>=arr->lastindex)
  printf("invalid");
  
  else
 arr->ptr[index]=data;
    
  
}
int main(){
struct Array *arr;
arr=createArray(5);
printf("input the value of the array");
for (int i = 0; i <5; i++)
{arr->lastindex+=1;
  scanf("%d",&arr->ptr[i]);
}
view(arr);
edit(arr,1,3);
view(arr);
return 0;

}


