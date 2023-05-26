#include <iostream>

#include "utilities.hpp"
#include "rooms.hpp"

using namespace std;


// HOT TO EXECUTE> g++ main.cpp ; ./a.exe
int main() {

    fill_rooms_data();



    while (true) {
        string userInput;

        cout << "Enter an input:";
        cin >> userInput;
        cout << endl;
        cout << "You have entered: " << userInput << endl;
        
        if (userInput == "exit") {
            break;
        }
    }


    return 0;
}


