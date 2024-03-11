#include <string>
#include <iostream>
#include "Actor.h" // Include the header file for the Actor class

typedef std::string String;

class Monster : public Actor
{
public:
    Monster(const String& name, int level, int hp, int mp, int attack, int defense, int agility, int magic, CharacterClass* characterClass);
    ~Monster();
};

Monster::Monster(const String& name, int level, int hp, int mp, int attack, int defense, int agility, int magic, CharacterClass* characterClass)
    : Actor(name, level, hp, mp, attack, defense, agility, magic, characterClass)
{
}

Monster::~Monster()
{
}