#include "CharacterClass.h"

class Warrior : public CharacterClass
{
public:
    Warrior(String name, int initialHp, int initialMp, int initialAttack, int initialDefense, int initialAgility,
           int initialMagic);
    Warrior(String name);
    ~Warrior();

    std::vector<Skill> registerSkills() override; // Correct signature for overriding
};

Warrior::Warrior(String name, int initialHp, int initialMp, int initialAttack, int initialDefense, int initialAgility,
               int initialMagic)
    : CharacterClass(name, initialHp, initialMp, initialAttack, initialDefense, initialAgility, initialMagic,
                     registerSkills())
{
}

Warrior::Warrior(String name) : CharacterClass(name, registerSkills())
{
}

std::vector<Skill> Warrior::registerSkills()
{
    std::vector<Skill> WarriorSkills;
    
    return WarriorSkills;
}

Warrior::~Warrior()
{
}