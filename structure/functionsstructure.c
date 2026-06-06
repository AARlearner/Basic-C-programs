#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct car{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }car;
void fun(car L){
  printf("%d",L.hp);  
  return;
}
int main(){
    car ferari;
   ferari.hp=60;
   
   fun(ferari);
}