#include <string>
#include <vector>

typedef std::string String;

class Skill
{
private:
    String name;
    String description;
    String type;
    int baseDamge;
    int manaCost;

public:
    Skill(/* args */);
    ~Skill();
};

Skill::Skill(/* args */)
{
}

Skill::~Skill()
{
}
