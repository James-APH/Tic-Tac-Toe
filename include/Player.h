/**
 * @author James Huston | jamzhuston@gmail.com
 * @date 03/02/2024
 * @brief class to manage player inputs and data
 */


#ifndef INCLUDED_PLAYER_H
#define INCLUDED_PLAYER_H 

#include <iostream>
#include <string>


/**
 * @class Player in "Player.h"
 * @brief parent class for all types of users
 */
class Player {
 public:
  /**
   * @brief default constructor for player
   *
   */
  Player();

  /**
  * @brief constructor for player
  * @param name the name of the player 
  * @param symbol the symbol that the player is using
  */
  Player(std::string name, char symbol);

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
  * @return returns the name of the player
  */
  std::string getName();

  /**
  * @brief gets the symbol that the player is using
  * @return returns the symbol of the player
  */
  char getSymbol();

 private:
  std::string name;
  char symbol;
  int score;

  /**
   * @brief getter for player score
   * @return score the score of the player
   * wins  -->  +1
   * loses -->  -1
   */
  int getScore();

  /**
   * @brief setter for player score
   * @param s the score increment or
   * score decrement that is added to
   * the players score
   * wins  --> +1
   * loses --> -1
   */
  void setScore(int s);

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
* @class User in "Player.h"
* @brief child class to manage the human players
*/
class User : public Player{
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
  User(std::string name, char symbol);

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

/**
 * @class AI in "Player.h"
 * @brief child class to manage the AI players
 */
class AI : public Player{
 public:
  /**
   * default constructor for AI
   *
   */
  AI();

  /**
  * @brief constructor for the AI
  * @param symbol the symbol that the player is using
  */
  AI(char symbol);

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
