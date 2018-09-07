#include <stdio.h>

int main() 
{
	int n,r;
	scanf("%d",&n);
	r=n%10;
    n=n+10-r;
    printf("%d",n);
	return 0;
}
