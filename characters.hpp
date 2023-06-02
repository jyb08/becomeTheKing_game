#pragma once

#include <iostream>


using namespace std;


class Character {
public:

    int characterId;

    int level; // 0-99

    string name;

    string occupation;

    string personality;

    int strength;

    int intelligence;

    int charisma;


    int healthPoint;

    int magicPoint;

    int energyPoint;


    int money; // unit: Gold
};

Character Daphne_1;

void Daphne_1_data() {
    Daphne_1.characterId = 1;
    Daphne_1.level = 0;
    Daphne_1.name = "Daphne";
    Daphne_1.occupation = "Peasant";
    Daphne_1.personality = "Tough, Strong, Ambitious";
    Daphne_1.strength = 0;
    Daphne_1.intelligence = 0;
    Daphne_1.charisma = 0;
    Daphne_1.healthPoint = 0;
    Daphne_1.magicPoint = 0;
    Daphne_1.energyPoint = 0;
    Daphne_1.money = 2;
}



Character Peter_2;

void Peter_2_data() {
    Peter_2.characterId = 2;
    Peter_2.level = 20;
    Peter_2.name = "Peter";
    Peter_2.occupation = "Knight Master";
    Peter_2.personality = "Seems tough, actually kind, helping";
    Peter_2.strength = 10;
    Peter_2.intelligence = 20;
    Peter_2.charisma = 20;
    Peter_2.healthPoint = 20;
    Peter_2.magicPoint = 0;
    Peter_2.energyPoint = 20;
    Peter_2.money = 10;
}


Character Jasper_3;

void Jasper_3_data() {
    Jasper_3.characterId = 3;
    Jasper_3.level = 50;
    Jasper_3.name = "Jasper";
    Jasper_3.occupation = "Noble";
    Jasper_3.personality = "Gullible, Alcoholic, Stupid";
    Jasper_3.strength = 30;
    Jasper_3.intelligence = 0;
    Jasper_3.charisma = 0;
    Jasper_3.healthPoint = 40;
    Jasper_3.magicPoint = 0;
    Jasper_3.energyPoint = 40;
    Jasper_3.money = 50;
}

Character Agnes_4;

void Agnes_4_data() {
    Agnes_4.characterId = 4;
    Agnes_4.level = 0;
    Agnes_4.name = "Agnes";
    Agnes_4.occupation = "Noble";
    Agnes_4.personality = "Empathetic, Outgoing, Assertive";
    Agnes_4.strength = 35;
    Agnes_4.intelligence = 45;
    Agnes_4.charisma = 0;
    Agnes_4.healthPoint = 45;
    Agnes_4.magicPoint = 0;
    Agnes_4.energyPoint = 45;
    Agnes_4.money = 50;
}

Character Louis20th_5;

void Louis20th_5_data() {
    Louis20th_5.characterId = 5;
    Louis20th_5.level = 99;
    Louis20th_5.name = "Louis the 20th";
    Louis20th_5.occupation = "King";
    Louis20th_5.personality = "Violent, Ignorant, Selfish";
    Louis20th_5.strength = 99;
    Louis20th_5.intelligence = 0;
    Louis20th_5.charisma = 0;
    Louis20th_5.healthPoint = 99;
    Louis20th_5.magicPoint = 10;
    Louis20th_5.energyPoint = 99;
    Louis20th_5.money = 99;
}

Character Gandalf_6;

void Gandalf_6_data() {
    Gandalf_6.characterId = 1;
    Gandalf_6.level = 80;
    Gandalf_6.name = "Gandalf";
    Gandalf_6.occupation = "Mage";
    Gandalf_6.personality = "Dominnering, Magical, Threatening";
    Gandalf_6.strength = 99;
    Gandalf_6.intelligence = 99;
    Gandalf_6.charisma = 50;
    Gandalf_6.healthPoint = 99;
    Gandalf_6.magicPoint = 99;
    Gandalf_6.energyPoint = 99;
    Gandalf_6.money = 15;
}
