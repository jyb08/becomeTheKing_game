#pragma once

#include <iostream>


using namespace std;


class Character {
public:

    int characterId;

    int level; // 0-99

    int experience;

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

    double probability;
};

Character Daphne_1;

void Daphne_1_data() {
    Daphne_1.characterId = 1;
    Daphne_1.level = 0;
    Daphne_1.experience = 0;
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
    Peter_2.experience = 0;
    Peter_2.name = "\033[1;32mPeter\033[0m";
    Peter_2.occupation = "Knight Master";
    Peter_2.personality = "Seems tough, actually kind, helping";
    Peter_2.strength = 10;
    Peter_2.intelligence = 20;
    Peter_2.charisma = 20;
    Peter_2.healthPoint = 20;
    Peter_2.magicPoint = 0;
    Peter_2.energyPoint = 20;
    Peter_2.money = 10;
    Peter_2.probability = 0.10;
}

Character Jasper_3;

void Jasper_3_data() {
    Jasper_3.characterId = 3;
    Jasper_3.level = 50;
    Jasper_3.experience = 50;
    Jasper_3.name = "\033[1;33mJasper\033[0m";
    Jasper_3.occupation = "Noble";
    Jasper_3.personality = "Gullible, Alcoholic, Stupid";
    Jasper_3.strength = 30;
    Jasper_3.intelligence = 0;
    Jasper_3.charisma = 0;
    Jasper_3.healthPoint = 40;
    Jasper_3.magicPoint = 0;
    Jasper_3.energyPoint = 40;
    Jasper_3.money = 50;
    Jasper_3.probability = 0.20;
}

Character Agnes_4;

void Agnes_4_data() {
    Agnes_4.characterId = 4;
    Agnes_4.level = 0;
    Agnes_4.experience = 0;
    Agnes_4.name = "\033[1;32mAgnes\033[0m";
    Agnes_4.occupation = "Noble";
    Agnes_4.personality = "Empathetic, Outgoing, Assertive";
    Agnes_4.strength = 35;
    Agnes_4.intelligence = 45;
    Agnes_4.charisma = 0;
    Agnes_4.healthPoint = 45;
    Agnes_4.magicPoint = 0;
    Agnes_4.energyPoint = 45;
    Agnes_4.money = 50;
    Agnes_4.probability = 0.30;
}

Character Louis20th_5;

void Louis20th_5_data() {
    Louis20th_5.characterId = 5;
    Louis20th_5.level = 99;
    Louis20th_5.experience = 10000;
    Louis20th_5.name = "\033[1;37mLouis the 20th\033[0m";
    Louis20th_5.occupation = "King";
    Louis20th_5.personality = "Violent, Ignorant, Selfish";
    Louis20th_5.strength = 99;
    Louis20th_5.intelligence = 0;
    Louis20th_5.charisma = 0;
    Louis20th_5.healthPoint = 99;
    Louis20th_5.magicPoint = 10;
    Louis20th_5.energyPoint = 99;
    Louis20th_5.money = 10000;
    Louis20th_5.probability = 0.40;
}

Character Gandalf_6;

void Gandalf_6_data() {
    Gandalf_6.characterId = 6;
    Gandalf_6.level = 80;
    Gandalf_6.experience = 3500;
    Gandalf_6.name = "\033[1;31mGandalf\033[0m";
    Gandalf_6.occupation = "Mage";
    Gandalf_6.personality = "Dominnering, Magical, Threatening";
    Gandalf_6.strength = 99;
    Gandalf_6.intelligence = 99;
    Gandalf_6.charisma = 50;
    Gandalf_6.healthPoint = 99;
    Gandalf_6.magicPoint = 99;
    Gandalf_6.energyPoint = 99;
    Gandalf_6.money = 3000;
    Gandalf_6.probability = 0.50;
}

Character Thug_7;

void Thug_7_data() {
    Thug_7.characterId = 7;
    Thug_7.level = 5;
    Thug_7.experience = 10;
    Thug_7.name = "\033[1;31mThug\033[0m";
    Thug_7.occupation = "Monster";
    Thug_7.personality = "";
    Thug_7.strength = 10;
    Thug_7.intelligence = 5;
    Thug_7.charisma = 5;
    Thug_7.healthPoint = 15;
    Thug_7.magicPoint = 0;
    Thug_7.energyPoint = 10;
    Thug_7.money = 15;
    Thug_7.probability = 0.10;
}


Character Robber_8;

void Robber_8_data() {
    Robber_8.characterId = 8;
    Robber_8.level = 10;
    Robber_8.experience = 40;
    Robber_8.name = "\033[1;31mRobber\033[0m";
    Robber_8.occupation = "Monster";
    Robber_8.personality = "";
    Robber_8.strength = 20;
    Robber_8.intelligence = 10;
    Robber_8.charisma = 10;
    Robber_8.healthPoint = 30;
    Robber_8.magicPoint = 0;
    Robber_8.energyPoint = 20;
    Robber_8.money = 45;
    Robber_8.probability = 0.15;
}

Character Goblin_9;

void Goblin_9_data() {
    Goblin_9.characterId = 9;
    Goblin_9.level = 10;
    Goblin_9.experience = 30;
    Goblin_9.name = "\033[1;31mGoblin\033[0m";
    Goblin_9.occupation = "Monster";
    Goblin_9.personality = "";
    Goblin_9.strength = 25;
    Goblin_9.intelligence = 0;
    Goblin_9.charisma = 5;
    Goblin_9.healthPoint = 35;
    Goblin_9.magicPoint = 0;
    Goblin_9.energyPoint = 30;
    Goblin_9.money = 30;
    Goblin_9.probability = 0.20;
}

Character Ogre_10;

void Ogre_10_data() {
    Ogre_10.characterId = 10;
    Ogre_10.level = 15;
    Ogre_10.experience = 50;
    Ogre_10.name = "\033[1;31mOgre\033[0m";
    Ogre_10.occupation = "Monster";
    Ogre_10.personality = "";
    Ogre_10.strength = 35;
    Ogre_10.intelligence = 0;
    Ogre_10.charisma = 10;
    Ogre_10.healthPoint = 55;
    Ogre_10.magicPoint = 0;
    Ogre_10.energyPoint = 50;
    Ogre_10.money = 50;
    Ogre_10.probability = 0.25;
}

Character Gargoyle_11;

void Gargoyle_11_data() {
    Gargoyle_11.characterId = 11;
    Gargoyle_11.level = 30;
    Gargoyle_11.experience = 100;
    Gargoyle_11.name = "\033[1;31mGargoyle\033[0m";
    Gargoyle_11.occupation = "Monster";
    Gargoyle_11.personality = "";
    Gargoyle_11.strength = 25;
    Gargoyle_11.intelligence = 30;
    Gargoyle_11.charisma = 15;
    Gargoyle_11.healthPoint = 45;
    Gargoyle_11.magicPoint = 50;
    Gargoyle_11.energyPoint = 50;
    Gargoyle_11.money = 125;
    Gargoyle_11.probability = 0.30;
}

Character Minotaur_12;

void Minotaur_12_data() {
    Minotaur_12.characterId = 12;
    Minotaur_12.level = 50;
    Minotaur_12.experience = 200;
    Minotaur_12.name = "\033[1;31mMinotaur\033[0m";
    Minotaur_12.occupation = "Monster";
    Minotaur_12.personality = "";
    Minotaur_12.strength = 80;
    Minotaur_12.intelligence = 45;
    Minotaur_12.charisma = 50;
    Minotaur_12.healthPoint = 80;
    Minotaur_12.magicPoint = 70;
    Minotaur_12.energyPoint = 80;
    Minotaur_12.money = 250;
    Minotaur_12.probability = 0.40;
}

Character Dragon_13;

void Dragon_13_data() {
    Dragon_13.characterId = 13;
    Dragon_13.level = 95;
    Dragon_13.experience = 1000;
    Dragon_13.name = "\033[1;31mDragon\033[0m";
    Dragon_13.occupation = "Monster";
    Dragon_13.personality = "";
    Dragon_13.strength = 95;
    Dragon_13.intelligence = 95;
    Dragon_13.charisma = 95;
    Dragon_13.healthPoint = 95;
    Dragon_13.magicPoint = 95;
    Dragon_13.energyPoint = 95;
    Dragon_13.money = 1000;
    Dragon_13.probability = 0.50;
}

void fill_characters_data() {
    Daphne_1_data();
    Peter_2_data();
    Jasper_3_data();
    Agnes_4_data();
    Louis20th_5_data();
    Gandalf_6_data();
    Thug_7_data();
    Robber_8_data();
    Goblin_9_data();
    Ogre_10_data();
    Gargoyle_11_data();
    Minotaur_12_data();
    Dragon_13_data();
}





