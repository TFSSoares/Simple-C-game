#include <string>
#include <iostream>
#include "Actor.h" // Include the header file for the Actor class

typedef std::string String;

class Player : public Actor{
    private:
        int experience;
    public:
        Player(const String& name, int level, int hp, int mp, int attack, int defense, int agility, int magic, int experience, CharacterClass* characterClass);
        ~Player();
        int getExperience();
        void increaseExperience(int ExperienceEarned);
        void endGame();

};

Player::Player(const String& name, int level, int hp, int mp, int attack, int defense, int agility, int magic, int experience, CharacterClass* characterClass)
    : Actor(name, level, hp, mp, attack, defense, agility, magic, characterClass)
{
}

Player::~Player()
{
}

int Player::getExperience(){
    return this->experience;
}

void Player::increaseExperience(int ExperienceEarned){
    this->experience += ExperienceEarned;
}