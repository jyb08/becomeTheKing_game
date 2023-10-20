#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <iostream>

using namespace std;

void color_black() {
    printf("\e[0;30m");
}

void color_black_underline() {
    printf("\e[4;30m");
}

void color_black_background() {
    printf("\e[40m");
}

void color_red() {
    printf("\033[1;31m");
}

void color_red_underline() {
    printf("\e[4;31m");
}

void color_red_background() {
    printf("\e[41m");
}

void color_green() {
    printf("\033[1;32m");
}

void color_green_underline() {
    printf("\e[4;32m");
}

void color_green_background() {
    printf("\e[42m");
}

void color_yellow() {
    printf("\033[1;33m");
}

void color_yellow_underline() {
    printf("\e[4;33m");
}

void color_yellow_background() {
    printf("\e[43m");
}

void color_blue() {
    printf("\e[0;34m");
}

void color_blue_underline() {
    printf("\e[4;34m");
}

void color_blue_background() {
    printf("\e[44m");
}

void color_purple() {
    printf("\033[1;35m");
}

void color_purple_underline() {
    printf("\e[4;35m");
}

void color_purple_background() {
    printf("\e[45m");
}

void color_cyan() {
    printf("\033[1;36m");
}

void color_cyan_underline() {
    printf("\e[4;36m");
}

void color_cyan_background() {
    printf("\e[46m");
}

void color_white() {
    printf("\033[1;37m");
}

void color_white_underline() {
    printf("\e[4;37m");
}

void color_white_background() {
    printf("\e[47m");
}

void color_reset() {
    printf("\033[0m");
}

void print_game_over() {
    color_red();
    printf("<<<<<<<<<<<<<<<<<<<<<< GAME OVER >>>>>>>>>>>>>>>>>>>>>>\n");
    printf("!!!!!!!!!!!!!!!!!!!!! YOU DIED !!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("!!                       ______                      !!\n");
    printf("!!                    .-'      '-.                   !!\n");
    printf("!!                   /            |                  !!\n");
    printf("!!       _          |              |          _      !!\n");
    printf("!!      ( |         |,  .-.  .-.  ,|         / )     !!\n");
    printf("!!       > '=._     | )(__/  |__)( |     _.=' <      !!\n");
    printf("!!      (_/''=._'=._ |/     /|     || _.='_.='|_)    !!\n");
    printf("!!             '=._ (_     ^^     _)'_.='            !!\n");
    printf("!!                 '='__|IIIIII|__/=''               !!\n");
    printf("!!                _.='| |IIIIII/ |'=._               !!\n");
    printf("!!      _     _.='_.='|          /'=._'=._     _     !!\n");
    printf("!!     ( |_.='_.='     `--------`     '=._'=._/ )    !!\n");
    printf("!!      > _.=''                            '=._ <    !!\n");
    printf("!!     (_/                                    |_)    !!\n");
    printf("!!                                                   !!\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    color_reset();
}

void print_game_victory() {
    color_yellow();
    printf("<<<<<<<<<<<<<<<<<<<<<< VICTORY >>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("!!!!!!!!!!!!!!!!!!!!! YOU SUCCEED !!!!!!!!!!!!!!!!!!!!!\n");
    printf("!!                  _______________                  !!\n");
    printf("!!                 |@@@@|     |####|                 !!\n");
    printf("!!                 |@@@@|     |####|                 !!\n");
    printf("!!                 |@@@@|     |####|                 !!\n");
    printf("!!                 |@@@@|     |####/                 !!\n");
    printf("!!                  |@@@|     |###/                  !!\n");
    printf("!!                   `@@|_____|##'                   !!\n");
    printf("!!                        (O)                        !!\n");
    printf("!!                     .-'''''-.                     !!\n");
    printf("!!                   .'  * * *  `.                   !!\n");
    printf("!!                  :  *       *  :                  !!\n");
    printf("!!                 : ~    PS4    ~ :                 !!\n");
    printf("!!                 : ~ A W A R D ~ :                 !!\n");
    printf("!!                  :  *       *  :                  !!\n");
    printf("!!                   `.  * * *  .'                   !!\n");
    printf("!!                     `-.....-'                     !!\n");
    printf("!!                                                   !!\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    color_reset();
}

void print_game_dice() {
    color_white();
    cout << "               (( _______         " << endl;
    cout << "     _______     /\\O    O\\        " << endl;
    cout << "    /O     /\\   /  \\      \\       " << endl;
    cout << "   /   O  /O \\ / O  \\O____O\\ ))   " << endl;
    cout << "((/_____O/    \\     /O     /      " << endl;
    cout << "  \\O    O\\    / \\  /   O  /       " << endl;
    cout << "   \\O    O\\ O/   \\/_____O/        " << endl;
    cout << "    \\O____O\\/ ))          ))      " << endl;
    cout << "  ((                              " << endl;
    color_reset();
}