#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a;
    printf("1st num:");
    scanf("%d",&a);
    int b;
    printf("2nd num:");
    scanf("%d",&b);
    int sum= add(a,b);
    printf("%d",sum);
    return 0;
}