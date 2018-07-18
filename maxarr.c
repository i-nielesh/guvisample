#include<stdio.h>
int main(){
    int a[100],i,n,max;
    printf("enter number");
    scanf("%d",&n);
    printf("enter elements in array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<n-1;i++){
         if(a[i]>a[i+1])
            max=a[i];
        else
            max=a[i+1];
     }
     printf("maximum number is:%d",max);
    return 0;
    
}
