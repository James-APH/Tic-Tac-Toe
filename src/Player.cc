/*
* @author James Huston | jamzhuston@gmail.com
* @date 28/02/2024
* @brief class to manage user inputs and data
*/



#include <iostream>
#include <string>
#include "User.h"

User::User() {
 // this("", "");
}


User::User(std::string name, std::string symbol) {
  this->name = name;
  this->symbol = symbol;
}


void User::getChoice(int boxes[]) {
  std::cout << "0" << std::endl;
}


std::string User::getName() {
  return "";
}


std::string User::getSymbol() {
  return "";
}



std::string User::toString() {
  return "";
}


