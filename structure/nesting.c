#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct car{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }car;
    typedef struct sportscar{
        car normal;
        char ability[10];
    }sportscar;
    sportscar ferari;
    strcpy(ferari.ability,"Pressure");
    ferari.normal.hp=150;
    ferari.normal.attack=180;
    strcpy(ferari.normal.name,"FErariv2");
    ferari.normal.speed=200;
    ferari.normal.tier='S';
}