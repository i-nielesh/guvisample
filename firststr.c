
#include <stdio.h>
int main()
{
    char s[20];
    int k,i;
    gets(s);
    scanf("%d",&k);
    for(i=0;i<k;i++){
        printf("%c",s[i]);
    }
    return 0;   
}
