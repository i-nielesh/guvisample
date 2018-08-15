#include <stdio.h>

int main()
{
    int a[10],i,max;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++){
        if(a[0]<a[i])
            a[0]=a[i];
    }   
    printf("%d",a[0]);
    return 0;
}
