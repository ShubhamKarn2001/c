#include<stdio.h>
int MAX_VALUE(int ,int);
int MAX_VALUE(int a[],int t){
         int temp;
        for (int i = 0; i <t-1; i++)
        {  
            for (int j = 0; j <t-1-i; j++)
            {
                if(a[j]<a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
            
        }
        return a[0];
    }
    
int main(){
    int t;
    
    printf("Enter the size of array");
    scanf("%d",&t);
    int a[t];
    for (int i = 0; i <t; i++)
    {
      scanf("%d",&a[i]);
    }
    int l=MAX_VALUE(a,t);
    printf("greatest value of the array is %d",l);
    
    return 0;
    }

    

