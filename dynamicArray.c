#include<stdio.h>
#include<stdlib.h>
struct DynArray{
    int capacity;
    int lastindex;
    int *ptr
};
struct DynArray* createArray(int cap){
    struct DynArray* arr;
    arr=(struct DynArray*)malloc(sizeof(struct DynArray));
    arr->ptr=(int*)malloc(sizeof(int)*cap);
    return arr;
}
void doubleArray(struct DynArray*arr){
    int *temp;
temp=(int*)malloc(sizeof(int)*arr->capacity*2);
for (int i = 0; i <=arr->lastindex; i++)
{
    temp[i]=arr->ptr[i];
}
free(arr->ptr);
arr->ptr=temp;
arr->capacity*=2;

}
 void HalfArray(struct DynArray*arr){
     if(arr->lastindex==arr->capacity/2-1){
    int*temp;
    temp=(int*)malloc(sizeof(int)*(arr->capacity/2);
    for (int i = 0; i <=arr->lastindex; i++)
    {
        temp[i]=arr->ptr[i];
    }
    free(arr->ptr);
    arr->ptr=temp;
    arr->capacity/=2;
     }
}
void insert(struct DynArray*arr,int index){
    if(index<0)
    printf("invalid index");
    else if(arr->lastindex=arr->capacity-1)
    doubleArray();
    for (int i = index; i <=arr->lastindex; i++)
    {
        arr->ptr[i+1]=arr->ptr[i];
    }
    
}
void delete(struct DynArray*arr,int index){
if(index<0)
printf("invalid");

}
