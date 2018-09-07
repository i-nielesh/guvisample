
#include <stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int l,i=0,f=0;
    gets(s);
    l=strlen(s);
    while(s[i]!='\0'){
        if(s[i]!=s[l-1-i]){
            f=1;
            break;
        }
        i++;
    }
    if (f==0)
        printf("yes");
    else
        printf("no");
        
    return 0;
}
