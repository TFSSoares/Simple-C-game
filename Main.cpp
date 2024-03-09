#include <vector>
#include <string>
#include <iostream>
#include "menus/Menu.h"
#include "nav/Nav.h"
#include "inGame/actors/Character.h"

typedef std::string String;

int main(){
    static bool continueGame = true;
    static std::vector <Character> characters;

    while(continueGame){
        Menu::initialMenu();

        String userInput;
        std::getline(std::cin, userInput);

        if(userInput == "1"){
            Nav::startSelection();
        } else if(userInput == "2"){

        } else if(userInput == "0"){
            continueGame = false;
        } else{
            printf("Valor digitado invalido");

        }
    }
  return 0;
}