#include<stdio.h>
#include<stdlib.h>
void createArray(int cap){
    int *p;
    printf("enter the size of array :");
    scanf("%d",&cap);
    p=(int*)calloc(cap,sizeof(int));
    for (int i = 0; i < cap; i++)
    {
    printf("input the value insdie array");
    scanf("%d",&p[i]);
    }
    for (int i = 0; i < cap; i++)
    {
       printf("values at %d is %d",i,p[i]);
    }
    

}
int main(){
    createArray(5);
    return 0;
}