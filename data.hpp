#pragma once

#include <vector>
#include "items.hpp"

class GameData {
public:
    int currentRoomId;
    bool invincibleMode;
    vector<Item> items;
};
