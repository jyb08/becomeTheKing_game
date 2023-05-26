#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

void color_red() {
    printf("\033[1;31m");
}

void color_green() {
    printf("\033[1;32m");
}

void color_yellow() {
    printf("\033[1;33m");
}

void color_purple() {
    printf("\033[1;35m");
}

void color_cyan() {
    printf("\033[1;36m");
}

void color_white() {
    printf("\033[1;37m");
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





