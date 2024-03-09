#include <string>

typedef std::string String;

class CharacterClass
{
private:
    virtual void display() = 0;
    String name;
    int initialHp;
    int initialMp;
public:
    CharacterClass(/* args */);
    ~CharacterClass();
    String getName();
    int getInitialHp();
    int getInicialMp();
};

CharacterClass::CharacterClass(/* args */)
{
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
