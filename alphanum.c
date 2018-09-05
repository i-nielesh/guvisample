
#include <stdio.h>
int main()
{
    char s[10];
    gets(s);
    int i=0,f=0,x=0;
    while(s[i]!='\0'){
        if(s[i]>=48 && s[i]<=57)
            f=1;
        else if((s[i]>=65 && s[i]<=90) ||(s[i]>=98 && s[i]<=122))
            x=1;
        i++;
    }
    if(f==1 && x==1)
        printf("yes");
    else
        printf("no");

    return 0;
}
         
