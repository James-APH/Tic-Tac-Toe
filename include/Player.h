/*
* @author James Huston | jamzhuston@gmail.com
* @date 03/02/2024
* @brief class to manage user inputs and data
*/


#ifndef INCLUDED_USER_H
#define INCLUDED_USER_H 

#include <iostream>
#include <string>



class Player {
 public:
  /**
   *
   *
   *
   */
  Player();



  /**
  * @brief constructor for player
  * @param name the name of the player 
  * @param symbol the symbol that the player is using
  */
  player(std::string name, std::string symbol);



  /**
  * @brief gets the choice of which box to select from the user
  * @param boxes the list of boxes
  * @detail allows the user to choose the box they would like
  *  use, if the user inputs a box already selected, the user
  *  will be asked to select another box.
  * @return int the box that the user has chosen
  * 
  */
  int getChoice(int boxes[]);


  /**
  * @brief gets the name of the player
  *
  * @return returns the name of the player
  */
  std::string getName();

  /**
  * @brief gets the symbol that the player is using
  *
  * @return returns the symbol of the player
  */
  std::string getSymbol();


 private:
  std::string name;
  std::string symbol;

  /**
  * @brief gets player details
  * @detail formats user information like this:
  *         name:    player_name
  *         symbol   player_symbol
  * 
  */
  std::string toString();
};



/**
* @class User in "User.h"
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
  */
  int getChoice(int boxes[]);
};


class AI {
 public:
  /**
   *
   *
   *
   */
  AI();



  /**
  * @brief constructor for player
  * @param name the name of the player 
  * @param symbol the symbol that the player is using
  */
  player(std::string name, std::string symbol);



  /**
  * @brief gets the choice of which box to select from the user
  * @param boxes the list of boxes
  * @detail allows the user to choose the box they would like
  *  use, if the user inputs a box already selected, the user
  *  will be asked to select another box.
  * @return int the box that the user has chosen
  */
  int getChoice(int boxes[]);
};

#endif // INCLUDED_PLAYER_H
