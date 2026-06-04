#include<stdio.h>
#include<string.h>
int main(){
    char str1[10]="How";
    char str2[5]="are";
    strcat(str1,str2);
    puts(str1);
    puts(str2);
}