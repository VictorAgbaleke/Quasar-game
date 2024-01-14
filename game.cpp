#include <iostream>
#include <string>
#include "game.h"
#include "Spinner.h"

void Game::gameStart(){
std::string stakes;
lowStakes makeLowBets;
mediumStakes makeMediumBets;
highStakes makeHighBets;
int score;

while(Game::creditCheck() && stakes!="exit"||stakes!="EXIT"){
std::cout<<"How much would you like to bet?"<<std::endl;
std::cout<<"For low stakes enter '20' "<<std::endl;
std::cout<<"For medium stakes enter '100' "<<std::endl;
std::cout<<"For high stakes enter '200' "<<std::endl;
std::cout<<"Do you wish to end the game,if you do please enter 'exit/EXIT' "<<std::endl;
std::cin>>stakes;

if(stakes=="20"){
score = makeLowBets.makeBet();
}
else if(stakes=="100" && credits >= 100){
score = makeMediumBets.makeBet();
}
else if(stakes=="200" && credits >= 200){
score = makeHighBets.makeBet();
}
else{
  std::<<"Invalid Choice,please try again."<<std::endl;
}

int bet = 0;
if (stakes == "20" || stakes == "100" || stakes == "200"){
    int bet = std::stoi(stakes);
}
if (score < 15){
    std::cout << "you scored less than 15 so no credits are rewarded." << std::endl;
    credits = credits - bet;
} else if (score == 15){
    std::cout << "You made " << (bet * (0.25)) - bet << " credits" << std::endl;
    credits += (bet * (0.25)) - bet;
} else if (score == 16) {
    std::cout << "You made " << (bet * (0.50)) - bet << " credits" << std::endl;
    credits += (bet * (0.50)) - bet;
} else if (score == 17) {
    std::cout << "You made " << bet - bet << " credits" << std::endl;
    credits += bet - bet;
} else if (score == 18) {
    std::cout << "You made " << (bet * (1.25)) - bet << " credits." << std::endl;
    credits += (bet * (1.25)) - bet;
} else if (score == 19) {
    std::cout << "You made " << (bet * (1.50)) - bet << " credits." << std::endl;
    credits += (bet * (1.50)) - bet;
} else if (score == 20) {
    std::cout << "You made " << (bet * (2)) - bet << " credits." << std::endl;
    credits += (bet * (2)) - bet;
} else if (score == 21) {
    credits = credits - bet;
}
// added pop up to show amount of credits left
std::cout << "You currently have " << credits << " credits left." << std::endl << std::endl;
}
gameEnd();
}


bool Game::creditCheck(){
  if (credits <= 20) {
  return false;
  }
  return true;
}

void Game::gameEnd(){
std::cout<<"GAME OVER!,you have "<<credits<<" credits left"<<std::endl;
}

if (score <= 14 || score > 20){
    cout << "Sorry, you lose your buy-in. Your remaining credits: " << credits << endl;
} else if (score == 15) {
    points = bet * 0.25;
    credits += points;
    cout << "You won " << points << " credits. Your total credits: " << credits << endl;
} else if (score == 16) {
    points = bet * 0.5;
    credits += points;
    cout << "You won " << points << " credits. Your total credits: " << credits << endl;
} else if (score == 17) {
    points = bet * 1.0;
    credits += points;
    cout << "You won " << points << " credits. Your total credits: " << credits << endl;
} else if (score == 18) {
    points = bet * 1.25;
    credits += points;
    cout << "You won " << points << " credits. Your total credits: " << credits << endl;
} else if (score == 19) {
    points = bet * 1.5;
    credits += points;
    cout << "You won " << points << " credits. Your total credits: " << credits << endl;
} else if (score == 20) {
    points = bet * 2.0;
    credits += points;
    cout << "You won " << points << " credits. Your total credits: " << credits << endl;
}

  return 0;
}
