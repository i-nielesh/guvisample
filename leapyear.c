#include<stdio.h>
int main(){
  int leapyear;
  printf("enter year:");
  scanf("%d",&leapyear);
  if(leapyear%4==0)
    printf("yes");
  else
    printf("No");
  return 0;
}
