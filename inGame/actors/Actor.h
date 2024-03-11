#include <string>
#include <iostream>
#include "../classes/CharacterClass.h"
#ifndef ACTOR_H
#define ACTOR_H

typedef std::string String;

class Actor
{
private:
    virtual void display() = 0;
    String name;
    int level;
    int hp;
    int mp;
    int attack;
    int defense;
    int agility;
    int magic;
    CharacterClass* characterClass;
public:
    Actor(String name, int level, int hp, int mp, int attack, int defense, int agility, int magic, CharacterClass* characterClass){
        this->name = name;
        this->level = level;
        this->characterClass = characterClass;

        if(level == 1){
            this->hp = characterClass->getInitialHp();
            this->mp = characterClass->getInicialMp();
            this->attack = characterClass->getInitialAttck();
            this->defense = characterClass->getInicialDefense();
            this->agility = characterClass->getInicialAgility();
            this->magic = characterClass->getInicialMagic();
        } else{
            this->hp = hp;
            this->mp = mp;
            this->attack = attack;
            this->defense = defense;
            this->agility = agility;
            this->magic = magic;
        }
    }
    void dealDamage();
    bool defend();
    void takeDamage(int damage);
    String getName();
    void getFullInfo();
};

void Actor::dealDamage(){
     std::cout << name << " attacks!";
}

bool Actor::defend(){
    std::cout << name << " is defending!";
    return true;
}

void Actor::takeDamage(int damage){
    this->hp -= damage;
    std::cout << name << " took " << damage << " of damage!";
}

String Actor::getName(){
    return this->name;
}

void Actor::getFullInfo(){
    std::cout 
    << "name:" << this->name + "\n "
    <<"Level: " << this->level << "\n "
    <<"Hp: " << this->hp << " \n "
    <<"Mp: " << this->mp << " \n "
    <<"Attack: " << this->attack << " \n "
    <<"Defense: "<< this->defense << " \n "
    <<"Agility: " << this->agility << " \n "
    << "Magic: " << this->magic << " \n ";
}

#endif // ACTOR_H