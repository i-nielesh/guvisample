
#include <stdio.h>
#include<math.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        if(r%2!=0)
            printf("%d ",r);
        n=n/10;
    }
    return 0;
}
