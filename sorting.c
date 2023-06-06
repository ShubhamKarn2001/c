#include<stdio.h>
#include<stdlib.h>
int partition(int a[],int lb,int ub){
   int pivot=a[lb];
   int start=lb;
   int end=ub;
   int temp;
   while(end>start){
      while(a[start]<=pivot)
      start++;
      while(a[end]>pivot)
      end--;
      if(end>start){
         temp=a[start];
         a[start]=a[end];
         a[end]=temp;

      }
   }
   temp=a[lb];
   a[lb]=a[end];
   a[end]=temp;
   return end;

}
void quicksort(int a[],int lb,int ub){
   int loc;
   if(lb<ub){
      loc=partition(a,lb,ub);
      quicksort(a,lb,loc-1);
      quicksort(a,loc+1,ub);
   }
}


void mergesort(int a[],int lb,int ub){
   int mid=(lb+ub)/2;
   if(lb<ub){
   mergesort(a,lb,mid);
   mergesort(a,mid+1,ub);
   merge(a,lb,mid,ub);
}}
void merge(int a[],int lb,int mid,int ub){
   int i=lb,j=mid+1,k=lb;
   int b[ub-1];

   while(i<=mid&& j<=ub){
      if(a[i]<=a[j]){
         b[k]=a[i];
         k++;
         i++;
      }
      else{
         b[k]=a[j];
         k++;
         j++;
      }
   }
   if(i>mid)
   {
      while(j<=ub){
         b[k]=a[j];
         k++;
         j++;
      }
   }
   else{
      while(i<=mid){
         b[k]=a[i];
         k++;
         i++;
      }
   }
   for (int k = lb; k <=ub; k++)
   {a[k]=b[k];
   }
   
}
int main(){
   int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int*p=(int*)malloc(sizeof(int)*n);
    for (int i =0 ; i <n; i++)
    {
       scanf("%d",&p[i]); 
    }
  printf("before soritng\n");
  for (int i = 0; i < n; i++)
  {
     printf("%d",p[i]);
  }
//   quicksort(p,0,4);
//   printf("\nafter soritng\n");
//    for (int i = 0; i < n; i++)
//   {
//      printf("%d  ",p[i]);
//   }
mergesort(p,0,n-1);
  printf("\nafter soritng\n");
   for (int i = 0; i < n; i++)
  {
     printf("%d  ",p[i]);
  }
     
  return 0;  
}