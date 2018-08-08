
#include <stdio.h>
#include<string.h>

int main()
{
    int i,l,flag=0;
    char str[100];
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++){
        if((str[i]>=48&&str[i]<=57)||str[i]==46){
            flag=1;
            continue;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("yes");
    else if(flag==0)
        printf("no");
    return 0;
}
