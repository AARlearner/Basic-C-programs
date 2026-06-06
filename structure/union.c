#include<stdio.h>
#include<string.h>
#include<stdbool.h>

    typedef union horse{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }horse;
    int main(){
    horse race;
    race.hp=60;
    race.speed=90;
    race.attack=100;
    race.tier='A';
    strcpy(race.name,"The king");
    printf("%d\n",race.hp);
    printf("%d\n",race.attack);
    printf("%d\n",race.speed);
    printf("%c\n",race.tier);
    printf("%s\n",race.name);
}