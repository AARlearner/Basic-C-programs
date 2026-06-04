#include<stdio.h>
#include<string.h>
int main(){
    char tc[10];
    char b[]=" ";
    char c[]="C";
    char t[]="Turbo";
    strcpy(tc,t);
    strcat(tc,b);//add tc and b
    strcat(tc,c);//same as well as

    
    printf("%s\n",tc);
}