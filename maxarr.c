#include<stdio.h>
int main(){
    int a[100],i,n,max=-32768;
    printf("enter number");
    scanf("%d",&n);
    printf("enter elements in array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<n-1;i++){
         if((a[i]>a[i+1])&&(a[i]>max))
            max=a[i];
        else if(a[i+1]>max)
            max=a[i+1];
     }
     printf("maximum number is:%d",max);
    return 0;
    
}
