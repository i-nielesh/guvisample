#include<stdio.h>
int main(){
  int a,b,i,j;
  printf("enter smaller no.");
  scanf("%d",&a);
  printf("enter larger no.");
  scanf("%d",&b);
  for(i=a;i<b;i++){
    for(j=2;j<i;j++){
        if(i%j==0)
            break;
    }
    if(i==j)
        printf("%d\t",i);
  }
}
