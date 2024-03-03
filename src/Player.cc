/*
* @author James Huston | jamzhuston@gmail.com
* @date 29/02/2024
* @brief definitions for Player.h
*/


#include <iostream>
#include <string>
#include "Player.h"

Player::Player() {}


Player::Player(std::string name, char symbol) {}


std::string Player::getName() {
  return "";
}


char Player::getSymbol() {
  return 'O';
}


int Player::getScore() {
  return 0;
}


void Player::setScore(int s) {}


std::string Player::toString() {
  return "";
}





User::User() {}


User::User(std::string name, char symbol) {}


void User::getChoice(char boxes[]) {}



AI::AI() {}


void AI::getChoice(char boxes[]) {}


