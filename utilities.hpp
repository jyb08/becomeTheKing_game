#pragma once

#include <iostream>
#include <time.h>
#include <random>
#include <cstring>
#include "color.hpp"
#include "characters.hpp"
#include "data.hpp"
#include "items.hpp"

using namespace std;

GameData newGame() {
    string userInput;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 99);
    // dis(gen) => random
    
    color_cyan();
    cout << "You are about to make a new character, Daphne." << endl;
    color_reset();

    cout << "You will roll two dice, 6 times." << endl;
    cout << "The addition value of the two faces you get indicates the starting " << endl;
    cout << "strength, intelligence, charisma, health point, magic point, " << endl;
    cout << "and energy point of Daphne, respectively." << endl;
    cout << "Now here are your dice." << endl;
    print_game_dice();
    cout << "To roll the dice, six times simultaneously, enter an input:";
    cin >> userInput;
    cout << "Your dice is rolled." << endl;

    color_green();

    // Daphne_1.strength = 10 + dis(gen) % 13;
    Daphne_1.strength = 99999; // DEBUG MODE
    Daphne_1.intelligence = 50 + dis(gen) % 13;
    Daphne_1.charisma = 50 + dis(gen) % 13;
    Daphne_1.healthPoint = 30 + dis(gen) % 13;
    Daphne_1.magicPoint = 2 + dis(gen) % 13;
    Daphne_1.energyPoint = 10 + dis(gen) % 13;

    cout << "Daphne's starting strength is " << Daphne_1.strength << "." << endl;
    cout << "Daphne's starting intelligence is " << Daphne_1.intelligence << "." << endl;
    cout << "Daphne's starting charisma is " << Daphne_1.charisma << "." << endl;
    cout << "Daphne's health point is " << Daphne_1.healthPoint << "." << endl;
    cout << "Daphne's magic point is " << Daphne_1.magicPoint << "." << endl;
    cout << "Daphne's starting energy point is " << Daphne_1.energyPoint << "." << endl;
    color_reset();

    // Initialization of GameData
    GameData gameData;
    gameData.currentRoomId = 1;
    gameData.invincibleMode = true; // DEBUG INVINCIBLE MODE: Turn off for normal games.

    gameData.items.push_back(apple_0);
    gameData.items.push_back(chicken_1);
    gameData.items.push_back(short_sword_3);

    return gameData;
}

double generateRandomDouble() {

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 1.0);

    return dis(gen);

}

void saveGame() {


}


void loadGame() {



}

void displayCharacterStats(Character character) {
    // int level; // 0-99 LEVEL
    // string name;     
    // int strength;       STR
    // int intelligence;   INT
    // int charisma;       CHA
    // int healthPoint;    HP
    // int magicPoint;     MP
    // int energyPoint;    EP
    // int experience;     XP
    
    // Level 49 Daphne - [STR] 10 [INT] 10 [CHA] 12 [HP] 100 [MP] 30 [EP] 50
    
    cout << "Level " << character.level << " " << character.name << " - ";
    cout << "[STR] " << character.strength ;
    cout << " [INT] " << character.intelligence ;
    cout << " [CHA] " << character.charisma ;
    cout << " [HP] " << character.healthPoint ;
    cout << " [MP] " << character.magicPoint ;
    cout << " [EP] " << character.energyPoint ;
    cout << " [XP] " << character.experience ;
    cout << endl;
}

void delay(int number_of_seconds) { 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
    // Storing start time 
    clock_t start_time = clock(); 
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds); 
}


int calculateAttackPoint(int strength) {

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(50, 150);
    
    int output = strength * dis(gen) / 100;
    return output;
}

int calculateDefensePoint(int intelligence) {

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(50, 150);
    
    int output = intelligence * dis(gen) / 100;
    return output;

}

void showMap() {

    string map = 
    "                                       <Map of Belleville>                         \n"
    "                 \033[1;33m|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       \n"
    "                 |                         Kings Palace                        |       \n"
    "                 |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\033[0m       \n"
    "                                                                                       \n"
    "                 |||||||||||||||||      |||||||||||||||||      |||||||||||||||||       \n"
    "                 | Jasper House  |      |    Square     |      |  Agnes House  |       \n"
    "                 |||||||||||||||||      |||||||||||||||||      |||||||||||||||||       \n"
    "                                                                                       \n"        
    "                 |||||||||||||||||      |||||||||||||||||      |||||||||||||||||       \n"
    "                 |    Church     |      | Trading Post  |      |   Hospital    |       \n"
    "                 |||||||||||||||||      |||||||||||||||||      |||||||||||||||||       \n"
    "                                                                                       \n"
    "                 |||||||||||||||||      |||||||||||||||||      |||||||||||||||||       \n"
    "                 | Clothes Shop  |      |     Square    |      |     Market    |       \n"
    "                 |||||||||||||||||      |||||||||||||||||      |||||||||||||||||       \n"
    "                                                                                       \n"
    "                 |||||||||||||||||      |||||||||||||||||      |||||||||||||||||       \n"
    "                 |   Butchery    |      |    Square     |      |   Blacksmith  |       \n"
    "                 |||||||||||||||||      |||||||||||||||||      |||||||||||||||||       \n"
    "                                                                                       \n"                                                                            
    "                 |||||||||||||||||      |||||||||||||||||      |||||||||||||||||       \n" 
    "                 |  Horse Farm   |      |    Square     |      |     Tavern    |       \n"
    "                 |||||||||||||||||      |||||||||||||||||      |||||||||||||||||       \n"
    "                                                                                       \n"
    "                                        |||||||||||||||||      |||||||||||||||||       \n"
    "                                        |     Square    |      | Knight School |       \n"
    "                                        |||||||||||||||||      |||||||||||||||||       \n"
    "                                                                                       \n"
    "||||||||||||     |||||||||||||||||      |||||||||||||||||      |||||||||||||||||       \n"
    "|| Daphne ||     ||  .     .    ||      ||   .  .      ||      ||             ||       \n"
    "|| Family ||     || .   Farm . .||      || . . Farm  . ||      ||   Prison    ||       \n"
    "|| House  ||     ||    .  .  .  ||      ||  .    .  .  ||      ||             ||       \n"
    "||||||||||||     |||||||||||||||||      |||||||||||||||||      |||||||||||||||||       \n";

    cout << map << endl;
}

bool containString(string str1, string str2) {
    cout << "DEBUG 3:|" << str1 << "|" << endl;
    cout << "DEBUG 4:|" << str2 << "|" << endl;
    cout << "===============DEBUG 9: " << str1.length() << endl;
    cout << "===============DEBUG 10: " << str2.length() << endl;

    if (str1.length() < str2.length()) {
        return false;
    }

    for (int i = 0; i <= (str1.length() - str2.length()); i++) {
        bool found = true;
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i + j] != str2[j]) {
                found = false;
                cout << "DEBUG 5: false" << endl;
                cout << "DEBUG 6: " << str1.length() << endl;
                cout << "DEBUG 7: " << str2.length() << endl;
                cout << "DEBUG 11: |" << str1 << "|" << endl;
                cout << "DEBUG 12: |" << str2 << "|" << endl;
                cout << "DEBUG 13: " << (str1.length() - str2.length()) << endl;
                
                break;
            }
        }
        if (found) {
            cout << "DEBUG 6: true" << endl;
            return true;
        }
    }
    return false;
}

bool checkIfItemInInventory(GameData &gameData, string itemName) {
    vector<Item>::iterator found = gameData.items.end();

    for (auto it = gameData.items.begin(); it != gameData.items.end(); it++) {
        if (containString(it->name, itemName)) {
            found = it;
            return true;
        }
    }
    return false;
}


void showItems(GameData &gameData) {
    cout << "<Inventory>" << endl;
    for (int i = 0; i < gameData.items.size(); i++) {
        cout << gameData.items[i].name << endl;
    }
    cout << "----Over----" << endl;
}

void getItemToInventory(GameData &gameData, Item item) {
    gameData.items.push_back(item);
    cout << "You just picked up a " << item.name << "." << endl;
    showItems(gameData);
}

void removeItemWhenUsed(GameData &gameData, string itemName) {
    vector<Item>::iterator found = gameData.items.end();

    for (auto it = gameData.items.begin(); it != gameData.items.end(); it++) {
        if (containString(it->name, itemName)) {
            found = it;
        }
    }

    if (found != gameData.items.end()) {
        gameData.items.erase(found);
    } 
}
                                                             
void applyItem(GameData &gameData, string itemName) {
    Item item;

    if (itemName == "apple") {
        item = apple_0;
    } else if (itemName == "chicken") {
        item = chicken_1;
    } else if (itemName == "medicine") {
        item = medicine_2;
    }

    Daphne_1.strength += item.strength;
    Daphne_1.intelligence += item.intelligence;
    Daphne_1.charisma += item.charisma;
    Daphne_1.healthPoint += item.healthPoint; 
    Daphne_1.magicPoint += item.magicPoint;
    Daphne_1.energyPoint += item.energyPoint;
    color_white_underline(); 
    cout << "You just consumed " << item.name << "." << endl;
    color_reset();
    color_green();
    cout << "Daphne's strength is now " << Daphne_1.strength << " as she received " << item.strength << "." << endl;
    cout << "Daphne's intelligence is now " << Daphne_1.intelligence << " as she received " << item.intelligence << "." << endl;
    cout << "Daphne's charisma is now " << Daphne_1.charisma << " as she received " << item.charisma << "." << endl;
    cout << "Daphne's health point is now " << Daphne_1.healthPoint << " as she received " << item.healthPoint << "." << endl;
    cout << "Daphne's magic point is now " << Daphne_1.magicPoint << " as she received " << item.magicPoint << "." << endl;
    cout << "Daphne's energy point is now " << Daphne_1.energyPoint << " as she received " << item.energyPoint << "." << endl;
    color_reset();
}

string toLowerCases(string oldString) {


    for (int i = 0; i < oldString.length(); i++) {
        oldString[i] = tolower(oldString[i]);
    }
    
    return oldString;
}
  
  
void levelUp() {
    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 99);

    if (Daphne_1.experience >= 100) {
        Daphne_1.level += 1;
        Daphne_1.experience -= 100;
        
        color_purple_underline();
        cout << "Daphne's level is now " << Daphne_1.level << endl;
        color_reset();

        int added_strength = 2 + dis(gen) % 3;
        Daphne_1.strength += added_strength;
        int added_intelligence = 2 + dis(gen) % 3;
        Daphne_1.intelligence += added_intelligence;
        int added_charisma =1 + dis(gen) % 3;
        Daphne_1.charisma += added_charisma;
        int added_healthPoint = 3 + dis(gen) % 3;
        Daphne_1.healthPoint += added_healthPoint;
        int added_magicPoint = 2 + dis(gen) % 3;
        Daphne_1.magicPoint += added_magicPoint;
        int added_energyPoint = 1 + dis(gen) % 3;
        Daphne_1.energyPoint += added_energyPoint;
        
        color_purple();
        cout << "Daphne's strength is now " << Daphne_1.strength << " as she received " << added_strength << "." << endl;
        cout << "Daphne's intelligence is now " << Daphne_1.intelligence << " as she received " << added_intelligence << "." << endl;
        cout << "Daphne's charisma is now " << Daphne_1.charisma << " as she received " << added_charisma << "." << endl;
        cout << "Daphne's health point is now " << Daphne_1.healthPoint << " as she received " << added_healthPoint << "." << endl;
        cout << "Daphne's magic point is now " << Daphne_1.magicPoint << " as she received " << added_magicPoint << "." << endl;
        cout << "Daphne's energy point is now " << Daphne_1.energyPoint << " as she received " << added_energyPoint << "." << endl;
        color_reset();
        
    }
}
 
// "get apple"
// "get "
bool startWithString(string str1, string str2) { // if str1 starts with str2

    // check if str2 is longer than str1
    if (str2.length() > str1.length()) {
        return false;
    }


    for (int i = 0; i < str2.length(); i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }

    
    return true; 

}


string extractItemName(string userInput) {

    string itemName = "";
    for (int i = 4; i < userInput.length(); i++) {
        itemName += userInput[i];
    }
    
    return itemName;
}