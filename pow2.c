
#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    for(i=0;i<n/2;i++){
        if(pow(2,i)==n){
            f=1;
            break;
        }
    }
    if(f==1)
        printf("number is power of 2");
    else
        printf("number is not power of 2");

    return 0;
}
