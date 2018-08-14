#include<stdio.h>
int main(){
    char str[100];
    int i=0,w=0;
    printf("enter string\n");
    gets(str);
    while(str[i]!='\0'){
        if((str[i]!=' ')&&(str[i+1]==' ')){
            w++;
            i++;
            continue;
        }
        i++;
    }
    w++;
    printf("%d",w);
    return 0;
}
