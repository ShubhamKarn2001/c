#include<stdio.h>
void natural(int n){
    if(n==1)
    printf("1\n");
    if(n>1){
           printf("%d\n",n);//when to print in reverse order
        natural(n-1);
      //  printf("%d\n",n);when to print in increasing order

    }
    }
void even_natural(int n){
int count=0;
while(count!=n){
  for (int i = 2; i <= count; i++){
 if(i%2==0){
 printf("%d",i);
 count++;
 }}}

}

int main(){
    int n;
// printf("Enter the value of n");
// scanf("%d",&n);
// natural(n);
even_natural(5);
return 0;
}
