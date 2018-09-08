
#include <stdio.h>
#include<string.h>
int main()
{
    char s[20],e[10],o[10];
    int i=0,j=0,k=0;
    gets(s);
    while(s[i]!='\0'){
        if(i%2==0){
            o[j]=s[i];
            j++;
        }
        else{
            e[k]=s[i];
            k++;
        }
        i++;
    }
    o[j]='\0';
    e[k]='\0';
    puts(o);
    puts(e);
    return 0;
}
