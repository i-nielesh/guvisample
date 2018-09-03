#include <stdio.h>
#include<math.h>
int main()
{
    int a[10],r,n,i=0,k;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        a[i]=r;
        n=n/10;
        i++;
    }
    for(k=i-1;k>=0;k--)
        printf("%d ",a[k]);
    return 0;
}
