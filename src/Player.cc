/*
* @author James Huston | jamzhuston@gmail.com
* @date 29/02/2024
* @brief definitions for Player.h
*/


#include <iostream>
#include <string>
#include "Player.h"


Player::Player(std::string name, char symbol) : name(name), symbol(symbol) {
  score = 0;
}


std::string Player::getName() {
  return name;
}


char Player::getSymbol() {
  return symbol;
}


int Player::getScore() {
  return score;
}


void Player::setScore(int s) {
  score = (score + s >= 0 ? score + s : 0);
}

void display() {
  std::cout << "Player: " << name << '\n'
            << "Symbol: " << symbol << '\n'
            << "Score: " << score << std::endl;
}


User::User(std::string name, char symbol) : Player(name, symbol) {}


void User::getChoice(char boxes[]) {
  int fill;
  do {
  std::cout << "Enter a box number to fill: ";
  std::cin >> fill;
  } while (fill < MINIMUM_BOX_NUM
       || fill > MAXIMUM_BOX_NUMBER
       || boxes[fill] != DEFAULT_SYMBOL);
  boxes[fill] == symbol;
}


AI::AI() {}


void AI::getChoice(char boxes[]) {}


