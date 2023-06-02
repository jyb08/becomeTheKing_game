#include <iostream>

#include "utilities.hpp"
#include "rooms.hpp"
#include "color.hpp"
#include "events.hpp"

using namespace std;


// HOT TO EXECUTE> g++ main.cpp ; ./a.exe
int main() {

    fill_rooms_data();

    introduction();

    newGame();

    while (true) {
        string userInput;

        cout << "Following commands are available:" << endl;
        cout << "New Game: new, Save Game: save, Load Game: load, Quit: exit" << endl;
        cout << "Enter an input:";
        cin >> userInput;
        cout << endl;
        cout << "You have entered: " << userInput << endl;
        
        if (userInput == "new") {
        
        } else if (userInput == "save") {

        } else if (userInput == "load") {

        } else if (userInput == "exit") {
            break;
        }
    }


    return 0;
}


