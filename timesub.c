#include <stdio.h>

int main()
{
    int h1,m1,h2,m2,h3,m3;
    scanf("%d %d",&h1,&m1);
    scanf("%d %d",&h2,&m2);
    m3=m1-m2;
    h3=h1-h2;
    if(m3<0){
        printf("%d %d",h3-1,m3+60);
    }
    else
        printf("%d %d",h3,m3);
    return 0;
}
