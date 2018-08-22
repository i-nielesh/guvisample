#include <stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int i,j;
    gets(s1);
    gets(s2);
    for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';j++,i++){
        s1[i]=s2[j];
    }
    s1[i]='\0';
    printf("%s",s1);
    return 0;
}
