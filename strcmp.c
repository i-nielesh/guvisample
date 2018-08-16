#include <stdio.h>

int main()
{
    char s1[20],s2[20];
    int i=0;
    gets(s1);
    gets(s2);
    while((s1[i]!='\0')||(s2[i]!='\0')){
        if(s1[i]>s2[i]){
            printf("%s",s1);
            break;
        }
        else if(s2[i]>s1[i]){
            printf("%s",s2);
            break;
        }
        i++;
    }
    if((i==strlen(s1))&&(i==strlen(s2))){
        printf("%s",s1);
    }
    return 0;
}
