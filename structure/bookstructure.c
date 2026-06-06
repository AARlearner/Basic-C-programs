#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int Noofpage;
        float price;
    }a,b,c;
    a.Noofpage=100;
    a.price=411.5;
    strcpy(a.name,"Introductry circuit analysis");
    b.Noofpage=200;
    b.price=200;
    strcpy(b.name,"Higher Engineering Mathmetics");
    printf("%d\n",a.Noofpage);
      printf("%f\n",a.price);
        printf("%s\n",a.name);


}