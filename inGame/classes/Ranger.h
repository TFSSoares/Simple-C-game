#include "CharacterClass.h"

class Ranger : public CharacterClass
{
public:
    Ranger(String name, int initialHp, int initialMp, int initialAttack, int initialDefense, int initialAgility,
           int initialMagic);
    Ranger(String name);
    ~Ranger();

    std::vector<Skill> registerSkills() override; // Correct signature for overriding
};

Ranger::Ranger(String name, int initialHp, int initialMp, int initialAttack, int initialDefense, int initialAgility,
               int initialMagic)
    : CharacterClass(name, initialHp, initialMp, initialAttack, initialDefense, initialAgility, initialMagic,
                     registerSkills())
{
}

Ranger::Ranger(String name) : CharacterClass(name, registerSkills())
{
}

std::vector<Skill> Ranger::registerSkills()
{
    std::vector<Skill> rangerSkills;
    
    return rangerSkills;
}

Ranger::~Ranger()
{
}