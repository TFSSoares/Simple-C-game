#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "menus/Menu.h"
#include "nav/Nav.h"
#include "inGame/actors/Player.h"
#include "inGame/actors/Monster.h"
#include "inGame/classes/CharacterClass.h"
#include "inGame/classes/Mage.h"
#include "../json/single_include/nlohmann/json.hpp"

using json = nlohmann::json;

typedef std::string String;

static std::vector <Player> Players;
static std::vector <Monster> Monsters;

int main(){
    static bool continueGame = true;
    
    void registerMonsters();

    registerMonsters();

    Monsters[0].getFullInfo();

    // while(continueGame){
    //     Menu::initialMenu();

    //     String userInput;
    //     std::getline(std::cin, userInput);

    //     if(userInput == "1"){
    //         Nav::startSelection();
    //     } else if(userInput == "2"){

    //     } else if(userInput == "0"){
    //         continueGame = false;
    //     } else{
    //         printf("Valor digitado invalido");

    //     }
    // }
  return 0;
}

void registerMonsters(){
    std::ifstream file("./Information/MonstersInfo.json");

    if(!file.is_open()){
        std::cerr << "Failed to open file. \n";
        return;
    }

     std::string fileContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

     json jsonData;
     try{
        jsonData = json::parse(fileContent);
    } catch(const std::exception& e){
        std::cerr << "Failed to parse JSON "<< e.what() << "\n";
    }

    for(auto& monster : jsonData["monsters"]){
        CharacterClass* mage = new Mage();
        String name = monster["name"];
        int level = monster["level"];
        int hp = monster["hp"];
        int mp = monster["mp"];
        int attack = monster["attack"];
        int defense = monster["defense"];
        int agility = monster["agility"];
        int magic = monster["magic"];
       
        Monster monsterObj(name, level, hp, mp, attack, defense, agility, magic, mage);
        Monsters.push_back(monsterObj);
            
    }
}