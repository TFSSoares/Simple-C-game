#include <string>
#include <iostream>
#include "CharacterClass.h"

typedef std::string String;

class Mage : public CharacterClass
{
private:
    /* data */
public:
    Mage(/* args */);
    ~Mage();
    virtual void display() override{}
};

Mage::Mage() : CharacterClass("Mage")
{
}

Mage::~Mage()
{
}
