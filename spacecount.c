#include<stdio.h>
int main(){
    char str[100];
    int i=0,s=0;
    printf("enter string\n");
    gets(str);
    while(str[i]!='\0'){
        if(str[i]==' '){
            s++;
            i++;
            continue;
        }
        i++;
    }
    printf("%d",s);
    return 0;
}
