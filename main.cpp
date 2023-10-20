#include <iostream>
#include <vector>
#include <string>

#include "utilities.hpp"
#include "rooms.hpp"
#include "color.hpp"
#include "events.hpp"
#include "data.hpp"
#include "characters.hpp"

using namespace std;

GameData gameData;

Item items[9] = {apple_0, chicken_1, medicine_2, short_sword_3, long_sword_4,
                broadsword_5, leather_armor_6, chain_armor_7, plate_armor_8};

Room rooms[23] = {empty_0, house_1, cropField_2, cropField_3, prison_4, square_5, 
                knightSchool_6, horseFarm_7, square_8, tavern_9, butchery_10,
                square_11, blacksmith_12, clothingShop_13, square_14, market_15,
                church_16, tradingPost_17, hospital_18, jasperHouse_19, square_20,
                agnesHouse_21, kingsPalace_22};

void make_items_array() {
    
    items[0] = apple_0;
    items[1] = chicken_1;
    items[2] = medicine_2;
    items[3] = short_sword_3;
    items[4] = long_sword_4;
    items[5] = broadsword_5;
    items[6] = leather_armor_6;
    items[7] = chain_armor_7;
    items[8] = plate_armor_8;

}

void make_rooms_array() {
    rooms[0] = empty_0;
    rooms[1] = house_1;
    rooms[2] = cropField_2;
    rooms[3] = cropField_3;
    rooms[4] = prison_4;
    rooms[5] = square_5; 
    rooms[6] = knightSchool_6; 
    rooms[7] = horseFarm_7;
    rooms[8] = square_8;
    rooms[9] = tavern_9; 
    rooms[10] = butchery_10;
    rooms[11] = square_11;
    rooms[12] = blacksmith_12; 
    rooms[13] = clothingShop_13; 
    rooms[14] = square_14;
    rooms[15] = market_15;
    rooms[16] = church_16; 
    rooms[17] = tradingPost_17; 
    rooms[18] = hospital_18;
    rooms[19] = jasperHouse_19; 
    rooms[20] = square_20;
    rooms[21] = agnesHouse_21;
    rooms[22] = kingsPalace_22;
}

void place_characters_npc() {
    rooms[6].characters.push_back(Peter_2);
    rooms[19].characters.push_back(Jasper_3);
    rooms[21].characters.push_back(Agnes_4);
    rooms[22].characters.push_back(Louis20th_5);
    rooms[20].characters.push_back(Gandalf_6);
}

void place_characters_initial_monsters() {
    Thug_7_data();
    Robber_8_data();
    Goblin_9_data();
    Ogre_10_data();
    Gargoyle_11_data();
    Minotaur_12_data();
    Dragon_13_data();

    // rooms[0] = empty_0;

    // rooms[1] = house_1;
      
    // rooms[2] = cropField_2;
    
    // rooms[3] = cropField_3;

    // rooms[4] = prison_4;

    // rooms[5] = square_5; 
    rooms[5].monsters.push_back(Goblin_9); 
    rooms[5].monsters.push_back(Goblin_9); 

    // rooms[6] = knightSchool_6; 

    // rooms[7] = horseFarm_7;

    // rooms[8] = square_8;
    rooms[8].monsters.push_back(Goblin_9); 
    rooms[8].monsters.push_back(Robber_8); 
    rooms[8].monsters.push_back(Robber_8); 

    // rooms[9] = tavern_9; 
    rooms[9].monsters.push_back(Thug_7); 
    rooms[9].monsters.push_back(Thug_7);
    rooms[9].monsters.push_back(Thug_7);

    // rooms[10] = butchery_10;

    // rooms[11] = square_11;
    rooms[11].monsters.push_back(Goblin_9); 
    rooms[11].monsters.push_back(Goblin_9); 
    // rooms[12] = blacksmith_12; 
    
    // rooms[13] = clothingShop_13; 
    
    // rooms[14] = square_14;
    rooms[14].monsters.push_back(Goblin_9); 
    rooms[14].monsters.push_back(Goblin_9); 
    rooms[14].monsters.push_back(Ogre_10); 
    rooms[14].monsters.push_back(Robber_8); 
    rooms[14].monsters.push_back(Robber_8); 

    // rooms[15] = market_15;
    
    // rooms[16] = church_16; 

    // rooms[17] = tradingPost_17; 
    rooms[17].monsters.push_back(Goblin_9); 
    rooms[17].monsters.push_back(Goblin_9); 
    rooms[17].monsters.push_back(Goblin_9); 
    rooms[17].monsters.push_back(Ogre_10); 
    rooms[17].monsters.push_back(Ogre_10); 

    // rooms[18] = hospital_18;
    
    // rooms[19] = jasperHouse_19; 
    
    // rooms[20] = square_20;
    rooms[20].monsters.push_back(Goblin_9); 
    rooms[20].monsters.push_back(Goblin_9); 
    rooms[20].monsters.push_back(Goblin_9); 
    rooms[20].monsters.push_back(Ogre_10); 
    rooms[20].monsters.push_back(Ogre_10); 
    rooms[20].monsters.push_back(Dragon_13); 


    // rooms[21] = agnesHouse_21;
    
    // rooms[22] = kingsPalace_22;
    
    

    
}

void place_items_initial() {
    rooms[1].items.push_back(apple_0);
    rooms[1].items.push_back(chicken_1);
    rooms[1].items.push_back(medicine_2);


    rooms[5].items.push_back(apple_0);
    rooms[5].items.push_back(chicken_1);
    rooms[8].items.push_back(apple_0);
    rooms[8].items.push_back(chicken_1);
    rooms[14].items.push_back(apple_0);
    rooms[14].items.push_back(chicken_1);
    rooms[16].items.push_back(apple_0);
    rooms[16].items.push_back(chicken_1);
    rooms[16].items.push_back(medicine_2);
}

void dropItemFromMonsters(GameData &gameData, double monsterProbability) {
    
    for (int i = 0; i < 9; i++) {

        double cutProbability = items[i].probability * monsterProbability;
        double generatedProbability = generateRandomDouble();
        // cout << "DEBUG: (itemName)" << items[i].name << endl;
        // cout << "DEBUG: (itemProb): " << items[i].probability << endl;
        // cout << "DEBUG: (monsterProb): " << monsterProbability << endl;
        // cout << "DEBUG: (generatedProb): " << generatedProbability << endl;

        if (cutProbability > generatedProbability) {
            gameData.items.push_back(items[i]);
            cout << "You just earned a " << items[i].name << " from the monster." << endl;
        }
    }
}

void battleModeNPC() {

    while (true) {
        string userInput;
        vector<Character> &characters = rooms[gameData.currentRoomId].characters;

        cout << "Enter input : (attack)" ;
        cin >> userInput;

        if (userInput == "attack" || userInput == "a") {
            // Attack NPC
            for (int i = 0; i < characters.size(); i++) {

                int effect = calculateDefensePoint(characters[i].intelligence) 
                                - calculateAttackPoint(Daphne_1.strength);
                                
                if (effect < 0) {
                    characters[i].healthPoint += effect;
                } else {
                    effect = 0;
                }
                
                cout << "Daphne hits the " << characters[i].name << " with "; 
                cout << "\e[4;31m" << (-1 * effect) << "\033[0m" << " damage!" << endl;

                displayCharacterStats(characters[i]);
            }
            // Remove the Dead NPC
            for (int i = characters.size() - 1; i >= 0; i--) {
                if (characters[i].healthPoint <= 0) {
                    Daphne_1.experience += characters[i].experience;
                    Daphne_1.money += characters[i].money;
                    color_yellow();
                    cout << "You earned " << characters[i].experience << " XP " ;
                    cout << "and " << characters[i].money << " gold." << endl;
                    color_reset();
                    levelUp();
                    // Remove NPC.
                    characters.erase(characters.begin() + i);
                }
            }
        }

        if (characters.size() != 0) {
            for (int i = 0; i < characters.size(); i++) {

                int effect = calculateDefensePoint(Daphne_1.intelligence) 
                        - calculateAttackPoint(characters[i].strength);

                if (effect < 0 && gameData.invincibleMode == false) {
                    Daphne_1.healthPoint += effect;
                } else {
                    effect = 0;
                }

                cout << "A " << characters[i].name << " hits you with ";
                cout << "\e[4;31m" << (-1 * effect) << "\033[0m" << " damage!" << endl;

                displayCharacterStats(Daphne_1);
            }
        } else if (characters.size() == 0) {
            break;
        } 
        
        // Check Daphene's Health Point
        if (Daphne_1.healthPoint <= 0) {
            cout << endl;
            print_game_over();
            gameData.currentRoomId = 1;
            Daphne_1.healthPoint = 1;
            break;
        }


    }
    
}

void battleModeMonsters() {
    while (true) {
        string userInput;
        vector<Character> &monsters = rooms[gameData.currentRoomId].monsters;
        cout << endl << endl;

        if (monsters.size() != 0) {
            for (int i = 0; i < monsters.size(); i++) {
                int effect = calculateDefensePoint(Daphne_1.intelligence) 
                                - calculateAttackPoint(monsters[i].strength);
        
                if (effect < 0 && gameData.invincibleMode == false) {
                    monsters[i].healthPoint += effect;
                } else {
                    effect = 0;
                }

                cout << "A " << monsters[i].name << " hits you with ";
                cout << "\e[4;31m" << (-1 * effect) << "\033[0m" << " damage!" << endl;

                displayCharacterStats(Daphne_1);
            }
        } else if (monsters.size() == 0) {
            break;
        } 
        
        // Check Daphene's Health Point
        if (Daphne_1.healthPoint <= 0) {
            cout << endl;
            print_game_over();
            gameData.currentRoomId = 1;
            Daphne_1.healthPoint = 1;
            break;
        }

        cout << "Enter input: (attack or run)" ;
        cin >> userInput;

        if (userInput == "attack" || userInput == "a") {
            // Attack Monsters
            for (int i = 0; i < monsters.size(); i++) {

                int effect = calculateDefensePoint(monsters[i].intelligence) 
                                - calculateAttackPoint(Daphne_1.strength);

                if (effect < 0) {
                    monsters[i].healthPoint += effect;
                } else {
                    effect = 0;
                }
                cout << "Daphne hits the " << monsters[i].name;
                cout << " with " << "\e[4;31m" << (-1 * effect) << "\033[0m" << " damage!" << endl;

                displayCharacterStats(monsters[i]);
            }
            // Remove the Dead Monsters
            for (int i = monsters.size() - 1; i >= 0; i--) {
                if (monsters[i].healthPoint <= 0) {
                    Daphne_1.experience += monsters[i].experience;
                    Daphne_1.money += monsters[i].money;
                    
                    // Money drop.
                    color_yellow();
                    cout << "You earned " << monsters[i].experience << " XP " ;
                    cout << "and " << monsters[i].money << " gold." << endl;
                    color_reset();

                    // Item drop.
                    dropItemFromMonsters(gameData, monsters[i].probability);

                    // Level up.
                    levelUp();

                    // Remove the monster.
                    monsters.erase(monsters.begin() + i);
                }
            }
        } else if (userInput == "run") {
            cout << "You fleed from the battle field!" << endl;
            for (int i = 0; i < rooms[gameData.currentRoomId].monsters.size(); i++) {
                Daphne_1.experience -= rooms[gameData.currentRoomId].monsters[i].experience;
            }
            break;
        }

    }
}

void displayUnexpendableItemErrorMessage() {

    cout << "\033[1;37mThis item can NOT be used.\033[0m" << endl;
    cout << "Its effects are already applied to your current status." << endl;

}

void itemUsageMode() {
    while (true) {
        char userInput[100];

        cout << "You are now in the " << "\e[0;34m" << "Item Usage Mode." << "\033[0m" << endl;
        cout << "Here, you can check your inventory, buy new items, and use items." << endl;
        cout << "You can see your current inventory below:" << endl;
        color_blue();
        showItems(gameData);
        color_reset();
        
        // TODO: Clear input method as c++ doesn't automatically clears and manages input
        // spaces. cin.clear() and cin.ignore() need to be modified to accommodate the problem.
        // cin.clear();
        // cin.ignore();
        cout << "Enter input: " ;
        cin.getline(userInput, 100);
        
        string lowerUserInput = toLowerCases(userInput);
        // remove from inventory, add on to the points (only when expendable is true)

        if (lowerUserInput == "apple" && checkIfItemInInventory(gameData, "apple")) {
            removeItemWhenUsed(gameData, "apple");
            applyItem(gameData, "apple");
        } else if (lowerUserInput == "chicken" && checkIfItemInInventory(gameData, "chicken")) {
            removeItemWhenUsed(gameData, "chicken");
            applyItem(gameData, "chicken");
        } else if (lowerUserInput == "medicine" && checkIfItemInInventory(gameData, "medicine")) {
            removeItemWhenUsed(gameData, "medicine");
            applyItem(gameData, "medicine");
        } else if (containString(lowerUserInput, "short sword")) {
           displayUnexpendableItemErrorMessage();
        // } else if (lowerUserInput == "long sword" && checkIfItemInInventory(gameData, "long sword")) {
        //     displayUnexpendableItemErrorMessage();
        // } else if (lowerUserInput == "broadsword" && checkIfItemInInventory(gameData, "broadsword")) {
        //     displayUnexpendableItemErrorMessage();
        // } else if (lowerUserInput == "leather armor" && checkIfItemInInventory(gameData, "leather armor")) {
        //     displayUnexpendableItemErrorMessage();
        // } else if (lowerUserInput == "chain armor" && checkIfItemInInventory(gameData, "chain armor")) {
        //     displayUnexpendableItemErrorMessage();
        // } else if (lowerUserInput == "plate armor" && checkIfItemInInventory(gameData, "plate armor")) {
        //     displayUnexpendableItemErrorMessage();
        } else if (lowerUserInput == "exit") {
            cout << "DEBUG: BREAK IS EXECUTED!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            break;
        }        
    }
}

void getItem(string itemName) {
    if (checkItemFromRoom(rooms[gameData.currentRoomId], itemName)) {
        Item item = getItemFromRoom(rooms[gameData.currentRoomId], itemName);
        removeItemFromRoom(rooms[gameData.currentRoomId], itemName);
        getItemToInventory(gameData, item);

    } 
}

void playGame() {
    while (true) {
        string userInput;

        // Display Room Information
        cout << "--------------------------------------------------------------" << endl;
        cout << "<** " << rooms[gameData.currentRoomId].roomTitle << " **>" << endl;
        cout << rooms[gameData.currentRoomId].roomDescription << endl;

        // Display Item Information
        int item_size = rooms[gameData.currentRoomId].items.size();
        if (item_size != 0) {
            cout << "<< Item(s) in this room: >>" << endl;
            for (int i = 0; i < item_size; i++) {
                if (i != 0) {cout << ", ";}
                cout << rooms[gameData.currentRoomId].items[i].name;
            }
            cout << endl << endl;
        }


        // Display All NPC Characters
        int character_size = rooms[gameData.currentRoomId].characters.size();
        if (character_size != 0) {
            cout << "<< Character(s) in this room: >>" << endl;
            for (int i = 0; i < character_size; i++) {
                if (i != 0) { cout << ", "; } 
                cout << rooms[gameData.currentRoomId].characters[i].name;
            }
            cout << endl << endl;
        }

        // Start Battle if Monsters in the Room
        int monster_size = rooms[gameData.currentRoomId].monsters.size();
         if (monster_size != 0) {
            cout << "<< Monster(s) in this room: >>" << endl;
            for (int i = 0; i < monster_size; i++) {
                if (i != 0) { cout << ", "; } 
                cout << rooms[gameData.currentRoomId].monsters[i].name;
            }
            battleModeMonsters();
            cout << endl << endl;
        }
        
        // Display Directions
        string directions = rooms[gameData.currentRoomId].movingDirection;
        cout << directions << endl;
        cout << "Enter input: (type exit to quit) " ;
        // cin >> userInput;
        getline(cin, userInput);
        cout << endl;

        // Get User Input
        if (userInput == "e") {
            if (directions.find("east") == string::npos) {
                color_purple();
                cout << "This direction does not exist!" << endl << endl;
                color_reset();
            } else {
                gameData.currentRoomId = rooms[gameData.currentRoomId].eastRoomId;
            }
            
        } else if (userInput == "w") {
            if (directions.find("west") == string::npos) {
                color_purple();
                cout << "This direction does not exist!" << endl << endl;
                color_reset();
            } else {
                gameData.currentRoomId = rooms[gameData.currentRoomId].westRoomId;
            }

        } else if (userInput == "n") {
            if (directions.find("north") == string::npos) {
                color_purple();
                cout << "This direction does not exist!" << endl << endl;
                color_reset();
            } else {
                gameData.currentRoomId = rooms[gameData.currentRoomId].northRoomId;
            }

        } else if (userInput == "s") {
            if (directions.find("south") == string::npos) {
                color_purple();
                cout << "This direction does not exist!" << endl << endl;
                color_reset();
            } else {
                gameData.currentRoomId = rooms[gameData.currentRoomId].southRoomId;
            }
        
        } else if (userInput == "exit") {
            cout << "DEBUG2: BREAK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            break;
        } else if (userInput == "status") {
            displayCharacterStats(Daphne_1);
        } else if (userInput == "attack" && character_size != 0) {
            battleModeNPC();
        } else if (userInput == "map") {
            showMap();
        } else if (userInput == "items") {
            showItems(gameData);
        } else if (userInput == "use") {
            itemUsageMode();
        } else if (startWithString(userInput, "get ")) {
            string itemName = extractItemName(userInput);
            getItem(itemName);
        }
     }
}


// HOT TO EXECUTE> g++ main.cpp ; ./a.exe
int main() {

    // Initialize All Data
    fill_rooms_data();
    fill_characters_data();
    fill_items_data();
    make_rooms_array();
    make_items_array();
    place_characters_npc();
    place_characters_initial_monsters();
    place_items_initial();
    introduction();

    // Start Game
    string userInput;
    cout << "Following commands are available:" << endl;
    cout << "New Game: new, Save Game: save, Load Game: load, Quit: exit" << endl;
    cout << "Enter an input:";
    cin >> userInput;
    cout << endl;
    cout << "You have entered: " << userInput << endl;
    
    if (userInput == "new") {
        gameData = newGame();
        playGame();
    } else if (userInput == "load") {
        // Load data from file to the gameData object.

        playGame();
    } else if (userInput == "exit") {
        cout << "Good bye!" << endl;
    }

    return 0;
}


