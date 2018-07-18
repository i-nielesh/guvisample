#include<stdio.h>
int main(){
  int a,d,n,sum;
  printf("total number of terms");
  scanf("%d",&n);
  printf("enter first term");
  scanf("%d",&a);
  printf("difference");
  scanf("%d",&d);
  sum=n/2*(2*a+(n-1)*d);
  printf("%d",sum);
  return 0;
}
