#include <stdio.h>

int main()
{
    int n,a[20],i;
    printf("enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        printf("%d %d\n",a[i],i);

    return 0;
}
