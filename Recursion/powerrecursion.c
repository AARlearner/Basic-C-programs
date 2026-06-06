#include<stdio.h>
int power(int a,int b){
    int x=1;
   if(b==0) return 1;
   int recans =a*power(a,b-1);
   return recans;
    }

int main(){
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    int b;
    printf("Enter power:");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d",p);
}