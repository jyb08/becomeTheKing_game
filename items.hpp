#pragma once

#include <string>

// void _data() {
//     .strength = 0;
//     .intelligence = 0;
//     .charisma = 0;
//     .healthPoint = 0;
//     .magicPoint = 0;
//     .energyPoint = 0;
//     .price = 2;
// }

class Item {
public:
    string name;
    
    int strength;

    int intelligence;

    int charisma;

    int healthPoint;

    int magicPoint;

    int energyPoint;

    bool expendable;

    int price; // unit: Gold
    
    double probability;
};

Item apple_0;

void apple_0_data() {
    apple_0.name = "\033[1;31mapple\033[0m";
    apple_0.strength = 0;
    apple_0.intelligence = 0;
    apple_0.charisma = 0;
    apple_0.healthPoint = 10;
    apple_0.magicPoint = 3;
    apple_0.energyPoint = 5;
    apple_0.expendable = true;
    apple_0.price = 30;
    apple_0.probability = 0.30;
}

Item chicken_1;

void chicken_1_data() {
    chicken_1.name = "\e[0;34mchicken\033[0m";
    chicken_1.strength = 2;
    chicken_1.intelligence = 0;
    chicken_1.charisma = 0;
    chicken_1.healthPoint = 10;
    chicken_1.magicPoint = 0;
    chicken_1.energyPoint = 7;
    chicken_1.expendable = true;
    chicken_1.price = 50;
    chicken_1.probability = 0.25;
}

Item medicine_2;

void medicine_2_data() {
    medicine_2.name = "\033[1;33mmedicine\033[0m";
    medicine_2.strength = 0;
    medicine_2.intelligence = 0;
    medicine_2.charisma = 0;
    medicine_2.healthPoint = 15;
    medicine_2.magicPoint = 0;
    medicine_2.energyPoint = 15;
    medicine_2.expendable = true;
    medicine_2.price = 100;
    medicine_2.probability = 0.20;
}

Item short_sword_3;

void short_sword_3_data() {
    short_sword_3.name = "\033[1;37mshort sword\033[0m";
    short_sword_3.strength = 20;
    short_sword_3.intelligence = 0;
    short_sword_3.charisma = 0;
    short_sword_3.healthPoint = 0;
    short_sword_3.magicPoint = 0;
    short_sword_3.energyPoint = 0;
    short_sword_3.expendable = false;
    short_sword_3.price = 300;
    short_sword_3.probability = 0.15;
}

Item long_sword_4;

void long_sword_4_data() {
    long_sword_4.name = "\033[1;37mlong sword\033[0m";
    long_sword_4.strength = 40;
    long_sword_4.intelligence = 0;
    long_sword_4.charisma = 0;
    long_sword_4.healthPoint = 0;
    long_sword_4.magicPoint = 0;
    long_sword_4.energyPoint = 0;
    long_sword_4.expendable = false;
    long_sword_4.price = 600;
    long_sword_4.probability = 0.10;
}

Item broadsword_5;

void broadsword_5_data() {
    broadsword_5.name = "\033[1;37mbroadsword\033[0m";
    broadsword_5.strength = 80;
    broadsword_5.intelligence = 0;
    broadsword_5.charisma = 0;
    broadsword_5.healthPoint = 0;
    broadsword_5.magicPoint = 0;
    broadsword_5.energyPoint = 0;
    broadsword_5.expendable = false;
    broadsword_5.price = 1000;
    broadsword_5.probability = 0.05;
}

Item leather_armor_6;

void leather_armor_6_data() {
    leather_armor_6.name = "\e[0;30mleather armor\033[0m";
    leather_armor_6.strength = 0;
    leather_armor_6.intelligence = 0;
    leather_armor_6.charisma = 0;
    leather_armor_6.healthPoint = 0;
    leather_armor_6.magicPoint = 0;
    leather_armor_6.energyPoint = 20;
    leather_armor_6.expendable = false;
    leather_armor_6.price = 300;
    leather_armor_6.probability = 0.15;
}

Item chain_armor_7;

void chain_armor_7_data() {
    chain_armor_7.name = "\e[0;30mchain armor\033[0m";
    chain_armor_7.strength = 0;
    chain_armor_7.intelligence = 0;
    chain_armor_7.charisma = 0;
    chain_armor_7.healthPoint = 0;
    chain_armor_7.magicPoint = 0;
    chain_armor_7.energyPoint = 40;
    chain_armor_7.expendable = false;
    chain_armor_7.price = 600;
    chain_armor_7.probability = 0.10;
}

Item plate_armor_8;

void plate_armor_8_data() {
    plate_armor_8.name = "\e[0;30mplate armor\033[0m";
    plate_armor_8.strength = 0;
    plate_armor_8.intelligence = 0;
    plate_armor_8.charisma = 0;
    plate_armor_8.healthPoint = 0;
    plate_armor_8.magicPoint = 0;
    plate_armor_8.energyPoint = 80;
    plate_armor_8.expendable = false;
    plate_armor_8.price = 1000;
    plate_armor_8.probability = 0.05;
}

void fill_items_data() {
    apple_0_data();
    chicken_1_data();
    medicine_2_data();
    short_sword_3_data();
    long_sword_4_data();
    broadsword_5_data();
    leather_armor_6_data();
    chain_armor_7_data();
    plate_armor_8_data();
}




