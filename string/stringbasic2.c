#include<stdio.h>
int main(){
char arr[]={'H','e','l','l','0','\0'};
int i=0;
while(arr[i]!='\0'){
printf("%c",arr[i]);
i++;
}
}