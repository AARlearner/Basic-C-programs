#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i=0,slen=0;
    printf("Input the string:\n");
    scanf("%s",s);
    while(s[i]!='\0'){
        slen++;
        i++;
    }
    printf("The length of string is:%d\n",slen);

}