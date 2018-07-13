#include<stdio.h>
#include<math.h>
int main(){
  int n1,n2,i,r,d=0,res=0;
  scanf("%d",&n1);
  n2=n1;
  while(n2!=0){
    n2=n2/10;
    ++d;
  }
  n2=n1;
  for(i=1;i<=d;i++){
    r=n2%10;
    n2=n2/10;
    res=res+pow(r,d);
  }
  if(res==n1)
    printf("yes");
  else
    printf("no");
  return 0;
}
