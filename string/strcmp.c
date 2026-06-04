#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="A";
    char str2[]="B";
  int x= strcmp(str1,str2);  //strcmp works whent the mismatch found
  printf("%d\n",x);
  puts(str1);
}