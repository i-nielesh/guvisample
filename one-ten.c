
#include <stdio.h>

int main()
{
    int n,i;
    printf("enter number between 1 to 10");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("\none");
            break;
        case 2:
            printf("\ntwo");
            break;
        case 3:
            printf("\nthree");
            break;
        case 4:
            printf("\nfour");
            break;
        case 5:
            printf("\nfive");
            break;
        case 6:
            printf("\nsix");
            break;
        case 7:
            printf("\nseven");
            break;
        case 8:
            printf("\neight");
            break;
        case 9:
            printf("\nnine");
            break;
        case 10:
            printf("\nten");
            break;
        default:
            printf("you entered wrong number");
        }

    return 0;
}
