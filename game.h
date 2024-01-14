//Author Agbaleke Victor
//January 19th, 2023

#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>


class Game{
std::int credits=100;

public:
void gameStart();
void gameEnd();

private:
bool creditCheck();
};

#endif
