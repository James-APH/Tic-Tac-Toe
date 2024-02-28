/*
* @author James Huston | jamzhuston@gmail.com
* @date 03/02/2024
* @brief class to manage user inputs and data
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
  * @brief default constructor for user
  * 
  */
  User();

  /**
  * @brief constructor for user
  * @param name the name of the user
  * @param symbol the symbol that the user is using
  */
  User(std::string name, std::string symbol);

  /**
  * @brief gets the choice of which box to select from the user
  * @param boxes the list of boxes
  * @detail allows the user to choose the box they would like
  *  use, if the user inputs a box already selected, the user
  *  will be asked to select another box.
  * @return int the box that the user has chosen
  * 
  *
  * --> may rewrite this function
  */
  int getChoice(int[] boxes);

  /**
  * @brief gets the name of the user
  *
  * @return returns the name of the user
  */
  std::string getName();

  /**
  * @brief gets the symbol that the user is using
  *
  * @return returns the symbol of the user
  */
  std::string getSymbol();


 private:
  std::string name;
  std::string symbol;

  /**
  * @brief gets user details
  * @detail formats user information like this:
  *         name:    user_name
  *         symbol   user_symbol
  * 
  */
  std::string toString();

};

#endif // INCLUDED_USER_H 
