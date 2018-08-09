#include <stdio.h>

int main()
{
    int time,hr,min;
    scanf("%d",&time);
    hr=time/60;
    min=time%60;
    printf("%d %d",hr,min);
    return 0;
}
