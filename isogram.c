
#include <stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,j,count=1;
    gets(s);
    for(i=0;s[i]!='\0';i++){
        for(j=i+1;s[j]!='\0';j++){
            if(s[i]==s[j]){
                count++;
                break;
            }
        }
    }
    if(count>1)
        printf("NO");
    else
        printf("YES");
    return 0;
}
