#pragma once

#include <iostream>
#include <time.h>
#include <random>
#include "color.hpp"
#include "characters.hpp"

using namespace std;


void newGame() {
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
    
    Daphne_1.strength = 2 + dis(gen) % 13;
    Daphne_1.intelligence = 50 + dis(gen) % 13;
    Daphne_1.charisma = 50 + dis(gen) % 13;
    Daphne_1.healthPoint = 2 + dis(gen) % 13;
    Daphne_1.magicPoint = 2 + dis(gen) % 13;
    Daphne_1.energyPoint = 10 + dis(gen) % 13;

    cout << "Daphne's starting strength is " << Daphne_1.strength << "." << endl;
    cout << "Daphne's starting intelligence is " << Daphne_1.intelligence << "." << endl;
    cout << "Daphne's starting charisma is " << Daphne_1.charisma << "." << endl;
    cout << "Daphne's health point is " << Daphne_1.healthPoint << "." << endl;
    cout << "Daphne's magic point is " << Daphne_1.magicPoint << "." << endl;
    cout << "Daphne's starting energy point is " << Daphne_1.energyPoint << "." << endl;
    color_reset();



}


void saveGame() {



}


void loadGame() {




}




void delay(int number_of_seconds) { 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
    // Storing start time 
    clock_t start_time = clock(); 
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds); 
}


void sayHello() {


    cout << "Hello world!" << endl;


}
