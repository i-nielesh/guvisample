#include<stdio.h>
int main(){
    char str[100];
    int i=0,l=0;
    printf("enter string\n");
    gets(str);
    while(str[i]!='\0'){
        if(str[i]=='.'){
            l++;
            i++;
            continue;
        }
        i++;
    }
    printf("%d",l);
    return 0;
}
