#include <string>
#include <iostream>
#include "../classes/CharacterClass.h"


typedef std::string String;

class Character
{
private:
    String name;
    int level;
    int hp;
    int mp;
    CharacterClass* characterClass;
public:
    Character(String nome);
};

Character::Character(String nome){
    this->name = name;
}


