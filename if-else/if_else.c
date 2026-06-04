#include<stdio.h>
int main() {
    int cp;
    printf("enter the price:");
    scanf("%d",&cp);
    int sp;
    printf("enter the selling price:");
    scanf("%d",&sp);
    if (sp>cp){
        printf("profit");
    }
    else {
        printf("loss");
    }
}