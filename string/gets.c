#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    gets(str);//without gets print only the first word
    printf("Your iput was :%s",str);
}
