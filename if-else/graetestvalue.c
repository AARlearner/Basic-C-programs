#include <stdio.h>
int main()
{
    int ar,ra,ta;
    printf("enter the age:");
    scanf("%d%d%d",&ar,&ra,&ta);
    if(ar<ra) {
        printf("ar is youngest");
    }
        else {
        printf("ra is youngest");
        if (ta<ra) {
            printf("ta is youngest");
        }
    }
    return 0;

}
