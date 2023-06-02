#pragma once

#include <iostream>


using namespace std;


class Room {
public:

    int roomId;

    string roomTitle;

    string roomDescription;

    string movingDirection;

    int northRoomId;

    int westRoomId;

    int southRoomId;

    int eastRoomId;

};


Room house_1;

void house_1_data() {
    house_1.roomId = 1;
    house_1.roomTitle = "Daphne's House";
    house_1.roomDescription = 
    "The house is where Daphne begins her journey to become the Queen.\n"
    "The house, which is made of mud and straw, is small and at risk of falling\n"
    "down. After many years of unchanging life, she decides\n"
    "to change her fate on her own...\n";
    house_1.movingDirection = 
    "[east: Crop Field]\n";
    house_1.northRoomId = 0;
    house_1.southRoomId = 0;
    house_1.westRoomId = 0;
    house_1.eastRoomId = 2;
}

Room cropField_2;

void cropField_2_data() {
    cropField_2.roomId = 2;
    cropField_2.roomTitle = "Crop Field";
    cropField_2.roomDescription =
    "This Crop Field is where Daphne and her family agriculture. On its westside\n"
    "is Daphne's house.\n";
    cropField_2.movingDirection = 
    "[west: Daphne's House]\n"
    "[east: Crop Field]\n";
    cropField_2.northRoomId = 0;
    cropField_2.southRoomId = 0;
    cropField_2.westRoomId = 1;
    cropField_2.eastRoomId = 3;
    
}

Room cropField_3;

void cropField_3_data() {
    cropField_3.roomId = 3;
    cropField_3.roomTitle = "Crop Field";
    cropField_3.roomDescription =
    "This Crop Field is abandoned due to its unhealthy soil. This unhealthy soil\n"
    "gradually affects Daphne's soil and leads to its decrease in quality and crop rotting\n";
    cropField_3.movingDirection = 
    "[north: Square]\n"
    "[west: Crop Field]\n"
    "[east: Prison]\n";
    cropField_3.northRoomId = 5;
    cropField_3.southRoomId = 0;
    cropField_3.westRoomId = 2;
    cropField_3.eastRoomId = 4;
}

Room prison_4;

void prison_4_data() {
    prison_4.roomId = 4;
    prison_4.roomTitle = "Prison";
    prison_4.roomDescription =
    "The Prison is where all the criminals of the town are held custody.\n"
    "The places and people near the prison are always in danger due to violent jailbreakers.\n";
    prison_4.movingDirection = 
    "[north: Knight School]\n"
    "[west: Crop Field]\n";
    prison_4.northRoomId = 6;
    prison_4.southRoomId = 0;
    prison_4.westRoomId = 3;
    prison_4.eastRoomId = 0;
}

Room square_5;

void square_5_data() {
    square_5.roomId = 5;
    square_5.roomTitle = "Square";
    square_5.roomDescription =
    "The Square is the center of trade, commerce, and culture of the area.\n";
    square_5.movingDirection = 
    "[north: Square]\n"
    "[south: Crop Field]\n"
    "[east: Knight School]\n";
    square_5.northRoomId = 8;
    square_5.southRoomId = 3;
    square_5.westRoomId = 0;
    square_5.eastRoomId = 6;
}

Room knightSchool_6;

void knightSchool_6_data() {
    knightSchool_6.roomId = 6;
    knightSchool_6.roomTitle = "Knight School";
    knightSchool_6.roomDescription =
    "The Knight School is Daphne's second major destination. Here, she learns how\n"
    "to become a knight and gets ready for her next step.\n";
    knightSchool_6.movingDirection = 
    "[north: Tavern]\n"
    "[south: Prison]\n"
    "[west: Square]\n";
    knightSchool_6.northRoomId = 9;
    knightSchool_6.southRoomId = 4;
    knightSchool_6.westRoomId = 5;
    knightSchool_6.eastRoomId = 0;
}

Room horseFarm_7;

void horseFarm_7_data() {
    horseFarm_7.roomId = 7;
    horseFarm_7.roomTitle = "Horse Farm";
    horseFarm_7.roomDescription =
    "The Hose Farm is where horses are taken care and rest during the night.\n";
    horseFarm_7.movingDirection = 
    "[north: Butchery]\n"
    "[east: Square]\n";
    horseFarm_7.northRoomId = 10;
    horseFarm_7.southRoomId = 0;
    horseFarm_7.westRoomId = 0;
    horseFarm_7.eastRoomId = 8;
}

Room square_8;

void square_8_data() {
    square_8.roomId = 8;
    square_8.roomTitle = "Square";
    square_8.roomDescription =
    "The Square is the center of trade, commerce, and culture of the area.\n";
    square_8.movingDirection = 
    "[north: Square]\n"
    "[south: Square]\n"
    "[west: Horse Farm]\n"
    "[east: Tavern]\n";
    square_8.northRoomId = 11;
    square_8.southRoomId = 5;
    square_8.westRoomId = 7;
    square_8.eastRoomId = 9;
}

Room tavern_9;

void tavern_9_data() {
    tavern_9.roomId = 9;
    tavern_9.roomTitle = "Tavern";
    tavern_9.roomDescription =
    "The Tavern is where alcohol is sold and drunk. Due to the heavy influence of\n"
    "catholic ideas, this place was often criticized to be taboo.\n";
    tavern_9.movingDirection = 
    "[north: Blacksmith]\n"
    "[south: Knight School]\n"
    "[west: Square]\n";
    tavern_9.northRoomId = 12;
    tavern_9.southRoomId = 6;
    tavern_9.westRoomId = 8;
    tavern_9.eastRoomId = 0;
}

Room butchery_10;

void butchery_10_data() {
    butchery_10.roomId = 10;
    butchery_10.roomTitle = "Butchery";
    butchery_10.roomDescription =
    "The Butchery is where people buy meat, poultry, and fish.\n";
    butchery_10.movingDirection = 
    "[north: Clothing Shop]\n"
    "[south: House Farm]\n"
    "[east: Square]\n";
    butchery_10.northRoomId = 13;
    butchery_10.southRoomId = 7;
    butchery_10.westRoomId = 0;
    butchery_10.eastRoomId = 11;
}

Room square_11;

void square_11_data() {
    square_11.roomId = 11;
    square_11.roomTitle = "Square";
    square_11.roomDescription =
    "The Square is the center of trade, commerce, and culture of the area.\n";
    square_11.movingDirection = 
    "[north: Square]\n"
    "[south: Square]\n"
    "[west: Butchery]\n"
    "[east: Blacksmith]\n";
    square_11.northRoomId = 14;
    square_11.southRoomId = 8;
    square_11.westRoomId = 10;
    square_11.eastRoomId = 12;
}

Room blacksmith_12;

void blacksmith_12_data() {
    blacksmith_12.roomId = 12;
    blacksmith_12.roomTitle = "Blacksmith";
    blacksmith_12.roomDescription =
    "The Blacksmith is where objects made of iron are fabricated and sold.\n";
    blacksmith_12.movingDirection = 
    "[north: Market]\n"
    "[south: Tavern]\n"
    "[west: Square]\n";
    blacksmith_12.northRoomId = 15;
    blacksmith_12.southRoomId = 9;
    blacksmith_12.westRoomId = 11;
    blacksmith_12.eastRoomId = 0;
}

Room clothingShop_13;

void clothingShop_13_data() {
    clothingShop_13.roomId = 13;
    clothingShop_13.roomTitle = "Clothing Shop";
    clothingShop_13.roomDescription =
    "The Clothing Shop is where clothing, silk, and other fabric are sold.\n";
    clothingShop_13.movingDirection = 
    "[north: Church]\n"
    "[south: Butchery]\n"
    "[east: Square]\n";
    clothingShop_13.northRoomId = 16;
    clothingShop_13.southRoomId = 10;
    clothingShop_13.westRoomId = 0;
    clothingShop_13.eastRoomId = 14;
}

Room square_14;

void square_14_data() {
    square_14.roomId = 14;
    square_14.roomTitle = "Square";
    square_14.roomDescription =
    "The Square is the center of trade, commerce, and culture of the area.\n";
    square_14.movingDirection = 
    "[north: Trading Post]\n"
    "[south: Square]\n"
    "[west: Clothing Shop]\n"
    "[east: Market]\n";
    square_14.northRoomId = 17;
    square_14.southRoomId = 11;
    square_14.westRoomId = 13;
    square_14.eastRoomId = 15;
}

Room market_15;

void market_15_data() {
    market_15.roomId = 15;
    market_15.roomTitle = "Market";
    market_15.roomDescription =
    "The Market is various local and imported goods are sold.\n";
    market_15.movingDirection = 
    "[north: Hospital]\n"
    "[south: Blacksmith]\n"
    "[west: Square]\n";
    market_15.northRoomId = 18;
    market_15.southRoomId = 12;
    market_15.westRoomId = 14;
    market_15.eastRoomId = 0;
}

Room church_16;

void church_16_data() {
    church_16.roomId = 16;
    church_16.roomTitle = "Church";
    church_16.roomDescription =
    "The Church is a building for public Christian worship.\n";
    church_16.movingDirection = 
    "[north: Jasper's House]\n"
    "[south: Clothing Shop]\n"
    "[east: Trading Post]\n";
    church_16.northRoomId = 19;
    church_16.southRoomId = 13;
    church_16.westRoomId = 0;
    church_16.eastRoomId = 17;
}

Room tradingPost_17;

void tradingPost_17_data() {
    tradingPost_17.roomId = 17;
    tradingPost_17.roomTitle = "Trading Post";
    tradingPost_17.roomDescription =
    "The Trading Post is where imported and local goods are received and traded.\n";
    tradingPost_17.movingDirection = 
    "[north: Square]\n"
    "[south: Square]\n"
    "[west: Church]\n"
    "[east: Hospital]\n";
    tradingPost_17.northRoomId = 20;
    tradingPost_17.southRoomId = 14;
    tradingPost_17.westRoomId = 16;
    tradingPost_17.eastRoomId = 18;
}

Room hospital_18;

void hospital_18_data() {
    hospital_18.roomId = 18;
    hospital_18.roomTitle = "Hospital";
    hospital_18.roomDescription =
    "The Hospital is where sick and injured people are treated.\n";
    hospital_18.movingDirection = 
    "[north: Agnes' house]\n"
    "[south: Market]\n"
    "[west: Trading Post]\n";
    hospital_18.northRoomId = 21;
    hospital_18.southRoomId = 15;
    hospital_18.westRoomId = 17;
    hospital_18.eastRoomId = 18; 
}

Room jasperHouse_19;

void jasperHouse_19_data() {
    jasperHouse_19.roomId = 19;
    jasperHouse_19.roomTitle = "Jasper's house";
    jasperHouse_19.roomDescription =
    "The Jasper's house is the noble Jasper's house.\n";
    jasperHouse_19.movingDirection = 
    "[south: Church]\n"
    "[east: Square]\n";
    jasperHouse_19.northRoomId = 0;
    jasperHouse_19.southRoomId = 16;
    jasperHouse_19.westRoomId = 0;
    jasperHouse_19.eastRoomId = 20;    
}

Room square_20;

void square_20_data() {
    square_20.roomId = 20;
    square_20.roomTitle = "Square";
    square_20.roomDescription =
    "The Square is the center of trade, commerce, and culture of the area.\n";
    square_20.movingDirection = 
    "[south: Trading Post]\n"
    "[west: Jasper's House]\n"
    "[east: Agnes' House]\n";
    square_20.northRoomId = 22;
    square_20.southRoomId = 17;
    square_20.westRoomId = 19;
    square_20.eastRoomId = 21;  
}

Room agnesHouse_21;

void agnesHouse_21_data() {
    agnesHouse_21.roomId = 21;
    agnesHouse_21.roomTitle = "Agnes' House";
    agnesHouse_21.roomDescription =
    "The Agnes' House is the noble Agnes' House.\n";
    agnesHouse_21.movingDirection = 
    "[south: Hospital]\n"
    "[west: Square]\n"; 
    agnesHouse_21.northRoomId = 0;
    agnesHouse_21.southRoomId = 18;
    agnesHouse_21.westRoomId = 20;
    agnesHouse_21.eastRoomId = 0;  
}

Room kingsPalace_22;

void kingsPalace_22_data() {
    kingsPalace_22.roomId = 22;
    kingsPalace_22.roomTitle = "King's Palace";
    kingsPalace_22.roomDescription =
    "The King's Palace is the King's Palace.\n";
    kingsPalace_22.movingDirection = 
    "[south: Square]\n";
    kingsPalace_22.northRoomId = 0;
    kingsPalace_22.southRoomId = 20;
    kingsPalace_22.westRoomId = 0;
    kingsPalace_22.eastRoomId = 0;  
}


void fill_rooms_data() {

    house_1_data();
    cropField_2_data();
    cropField_3_data();
    prison_4_data();
    square_5_data();
    knightSchool_6_data();
    horseFarm_7_data();
    square_8_data();
    tavern_9_data();
    butchery_10_data();
    square_11_data();
    blacksmith_12_data();
    clothingShop_13_data();
    square_14_data();
    market_15_data();
    church_16_data();
    tradingPost_17_data();
    hospital_18_data();
    jasperHouse_19_data();
    square_20_data();
    agnesHouse_21_data();
    kingsPalace_22_data();
    
}

