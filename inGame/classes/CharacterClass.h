#include <string>
#ifndef CHARACTERCLASS_H
#define CHARACTERCLASS_H

typedef std::string String;

class CharacterClass
{
private:
    virtual void display() = 0;
    String name;
    int initialHp;
    int initialMp;
    int initialAttack;
    int initialDefense;
    int initialAgility;
    int initialMagic;
public:
    CharacterClass(String name, int initialHp, int initialMp, int initialAttack, int initialDefense, int initialAgility,
        int initialMagic);
    CharacterClass(String name);
    ~CharacterClass();

    String getName();
    int getInitialHp();
    int getInicialMp();
    int getInitialAttck();
    int getInicialDefense();
    int getInicialAgility();
    int getInicialMagic();
};

CharacterClass::CharacterClass(String name, int initialHp, int initialMp, int initialAttack, int initialDefense, int initialAgility,
    int initialMagic){
    
    this->name = name;
    this->initialHp = initialHp;
    this->initialMp = initialMp;
    this->initialAttack = initialAttack;
    this->initialDefense = initialDefense;
    this->initialAgility = initialAgility;
    this->initialMagic = initialMagic;
}

CharacterClass::CharacterClass(String name){
    this->name = name;
}

CharacterClass::~CharacterClass()
{
}

String CharacterClass::getName(){
    return this->name;
}

int CharacterClass::getInicialMp(){
    return this->initialMp;
}

int CharacterClass::getInitialHp(){
    return this->initialHp;
}

int CharacterClass::getInitialAttck(){
    return this->initialAttack;
}
int CharacterClass::getInicialDefense(){
    return this->initialDefense;
}
int CharacterClass::getInicialAgility(){
    return this->initialAgility;
}
int CharacterClass::getInicialMagic(){
    return this->initialMagic;
}
#endif