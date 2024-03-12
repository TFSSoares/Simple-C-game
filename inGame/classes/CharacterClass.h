#ifndef CHARACTERCLASS_H
#define CHARACTERCLASS_H

#include <string>
#include <vector>
#include "Skill.h" // Include the header file for the Skill class

typedef std::string String;

class CharacterClass
{
private:
    virtual std::vector<Skill> registerSkills() = 0;
    String name;
    int initialHp;
    int initialMp;
    int initialAttack;
    int initialDefense;
    int initialAgility;
    int initialMagic;
    std::vector<Skill> skills;
public:
    CharacterClass(String name, int initialHp, int initialMp, int initialAttack, int initialDefense, int initialAgility,
        int initialMagic, std::vector<Skill> skills);
    CharacterClass(String name, std::vector<Skill> skills);
    ~CharacterClass();

    String getName();
    int getInitialHp();
    int getInitialMp();
    int getInitialAttack();
    int getInitialDefense();
    int getInitialAgility();
    int getInitialMagic();
};

CharacterClass::CharacterClass(String name, int initialHp, int initialMp, int initialAttack, int initialDefense, int initialAgility,
    int initialMagic, std::vector<Skill> skills)
    : name(name), initialHp(initialHp), initialMp(initialMp), initialAttack(initialAttack),
    initialDefense(initialDefense), initialAgility(initialAgility), initialMagic(initialMagic), skills(skills)
{
}

CharacterClass::CharacterClass(String name, std::vector<Skill> skills)
    : name(name), skills(skills)
{
}

CharacterClass::~CharacterClass()
{
}

String CharacterClass::getName()
{
    return name;
}

int CharacterClass::getInitialHp()
{
    return initialHp;
}

int CharacterClass::getInitialMp()
{
    return initialMp;
}

int CharacterClass::getInitialAttack()
{
    return initialAttack;
}

int CharacterClass::getInitialDefense()
{
    return initialDefense;
}

int CharacterClass::getInitialAgility()
{
    return initialAgility;
}

int CharacterClass::getInitialMagic()
{
    return initialMagic;
}

#endif