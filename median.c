#include<stdio.h>
int main(){
  int a[1000],n,i,j,temp;
  float med;
  scanf("%d",&n);
  printf("enter elements in array");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  if(n%2!=0){
    printf("%d",a[n/2]);
  }
  else{
      med=(float)(a[(n/2)-1]+a[n/2])/2;
    printf("%f",med);
  }
    return 0;
}
