#include<stdio.h>
  int avg(int a[],int t){
        int sum=0;
        for (int i = 0; i <t; i++)
        {
           sum=sum+a[i];
        }
        int result=sum/t;
       return result;
    }
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <n; i++)
    {
      scanf("%d",&a[i]);
    }
    int l=avg(a,n);
  printf("the avg value of elements of array is %d",l);
  return 0;
}