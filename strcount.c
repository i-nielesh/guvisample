
#include <stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i=0,l=0;
    printf("enter string\n");
    gets(s);
    while(s[i]!='\0'){
        if(s[i]==' '){
            i++;
           continue;}
        i++;
        l++;
    }
    printf("%d",l);
    return 0;
}
