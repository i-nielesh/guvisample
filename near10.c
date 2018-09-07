#include <stdio.h>

int main() 
{
	int n,r;
	scanf("%d",&n);
	r=n%10;
    if(r<5){
        n=n-r;
	    printf("%d",n);
    }
    else{
        n=n+(10-r);
        printf("%d",n);
    }
	return 0;
}
