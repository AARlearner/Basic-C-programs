#include<stdio.h>
int main(){
    struct p{
        int hp;
        int speed;
        int attack;
        char tier;//S,A,B,C,D
    };
    struct p m;
    m.attack=60;
    m.hp=50;
    m.speed=100;
    m.tier='A';
    printf("%d",m.attack);
    struct p charizard;
    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=100;
    charizard.tier='S';
}