#include<stdio.h>
int main(){
    int a[100],i,n,min=32767;
    printf("enter number");
    scanf("%d",&n);
    printf("enter elements in array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<n-1;i++){
         if((a[i]<a[i+1])&&(a[i]<min))
            min=a[i];
        else if(a[i+1]<min)
            min=a[i+1];
     }
     printf("minimum number is:%d",min);
    return 0;
    
}
