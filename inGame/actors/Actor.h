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
        }
    }
    void attack();
    bool defend();
    void takeDamage(int damage);
};

void Actor::attack(){
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

#endif // ACTOR_H