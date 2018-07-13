#include<stdio.h>
#include<math.h>
int main(){
  int a,b,n1,n2,i,r,d=0,res=0;
  printf("enter smalller no.");
  scanf("%d",&a);
  printf("enter greater no.");
  scanf("%d",&b);
  for(n1=a+1;n1<b;n1++){
   n2=n1;
    while(n2!=0){
      n2=n2/10;
      ++d;
    }
    n2=n1;
    while(n2!=0){
      r=n2%10;
      res=res+pow(r,d);
      n2=n2/10;
    }
    d=0;
    if(res==n1)
      printf("%d",res);
      res=0;
  }
