#include <string>

typedef std::string String;

class CharacterClass
{
private:
    virtual void display() = 0;
    String name;
    int initialHp;
    int inicialMp;
public:
    CharacterClass(/* args */);
    ~CharacterClass();
};

CharacterClass::CharacterClass(/* args */)
{
}

CharacterClass::~CharacterClass()
{
}
