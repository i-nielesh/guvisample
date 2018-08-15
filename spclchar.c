include <stdio.h>

int main()
{
    char s[100];
    int i=0,sc=0;
    printf("enter string");
    gets(s);
    while(s[i]!='\0'){
        if(((s[i]>=33)&&(s[i]<=47))||((s[i]>=58)&&(s[i]<=64))||((s[i]>=91)&&(s[i]<=96))||((s[i]>=123)&&(s[i]<=126))){          
            sc++;
        }
        i++;            
    }
    printf("%d",sc);
    return 0;
}
