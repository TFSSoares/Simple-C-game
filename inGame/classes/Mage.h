#include "CharacterClass.h"

class Mage : public CharacterClass
{
public:
    Mage(String name, int initialHp, int initialMp, int initialAttack, int initialDefense, int initialAgility,
           int initialMagic);
    Mage(String name);
    ~Mage();

    std::vector<Skill> registerSkills() override; // Correct signature for overriding
};

Mage::Mage(String name, int initialHp, int initialMp, int initialAttack, int initialDefense, int initialAgility,
               int initialMagic)
    : CharacterClass(name, initialHp, initialMp, initialAttack, initialDefense, initialAgility, initialMagic,
                     registerSkills())
{
}

Mage::Mage(String name) : CharacterClass(name, registerSkills())
{
}

std::vector<Skill> Mage::registerSkills()
{
    std::vector<Skill> MageSkills;
    
    return MageSkills;
}

Mage::~Mage()
{
}