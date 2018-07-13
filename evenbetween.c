#include<stdio.h>
int main(){
  int a,b,i;
  printf("enter smaller no.");
  scanf("%d",&a);
  printf("enter larger no.");
  scanf("%d",&b);
  for(i=a+1;i<b;i++){
    if(i%2==0)
      printf("%d\t",i);
  }
  return 0;
}
