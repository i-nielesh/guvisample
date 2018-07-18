#include<stdio.h>
int main(){
  int a,d,n,sum;
  printf("enter first term");
  scanf("%d",&a);
  printf("enter difference");
  scanf("%d",&d);
  printf("enter total number of terms");
  scanf("%d",&n);
  sum=n/2*(2*a+(n-1)*d);
  printf("%d",sum);
  return 0;
}
