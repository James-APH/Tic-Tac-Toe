/*
* @author James Huston | jamzhuston@gmail.com
* @date 03/02/2024
* @detail:
*
*/


#ifndef INCLUDED_USER_H

#define INCLUDED_USER_H 

#include <iostream>
#include <string>


/**
* @class Player in "Player.h"
* @brief parent class to manage types of users (people and computer)
*/
class User {
 public:
  /**
  * 
  *
  */
  User();


  /**
  *
  *
  */
  User(std::string name, std::string symbol);

  /**
  *
  *
  */
  int getChoice(int[]);

  /**
  *
  *
  *
  */
  std::string getName();

  /**
  *
  *
  *
  */
  std::string getSymbol();


 private:
  int wins, loses, ties;
  std::string name;

  /**
  *
  *
  *
  */
  std::string toString();

};

#endif // INCLUDED_USER_H 
