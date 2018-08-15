
#include <stdio.h>

int main()
{
    int n,i,t1=1,t2=1,t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i<=1)
            t=1;
        else{
            t=t1+t2;
            t1=t2;
            t2=t;
        }
        printf("%d\t",t);
    }
}
