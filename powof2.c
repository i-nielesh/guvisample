
#include <stdio.h>
#include<math.h>
int main()
{
    int n,p,i;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        p=pow(2,i);
        if(p>n)
            break;
    }
    printf("%d",p);
    return 0;
}
