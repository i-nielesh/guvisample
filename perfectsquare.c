
#include <stdio.h>
#include<math.h>
int main()
{
    int m,n,t;
    scanf("%d %d",&m,&n);
    t=sqrt(m*n);
    if(t*t==m*n)
        printf("yes");
    else
        printf("no");
    return 0;
}
