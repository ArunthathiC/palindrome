#include<stdio.h>
void main(){
  int n,r,res=0,temp;
  scanf("%d",&n);
  temp=n;
  while(n){
    r=n%10;
    n=n/10;
     res=res*10+r;
   }
  if(res==temp)
    printf("The number is palindrome");
  else
    printf("the number is not a palindrome");
  }
