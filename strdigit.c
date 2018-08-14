#include<stdio.h>
int main(){
    char str[100];
    int i=0,d=0;
    printf("enter string\n");
    gets(str);
    while(str[i]!='\0'){
        if((str[i]>=48)&&(str[i]<=57)){
            i++;
            d++;
            continue;
        }
        i++;
    }
    printf("%d",d);
    return 0;
}
