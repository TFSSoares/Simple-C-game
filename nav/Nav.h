#include <string>
#include <iostream>

typedef std::string String;

class Nav
{
private:
    virtual void display() = 0;
public:
   static void startSelection();
   static void continueSelection();
};

void Nav::startSelection(){
   Menu::startMenu();

   String userInput;
   std::getline(std::cin, userInput);

   if(userInput == "1"){

   }

 }
