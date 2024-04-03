/**
 * @author James Huston | jamzhuston@gmail.com
 * @date 03/02/2024
 * @brief class to manage player inputs and data
 */


#ifndef INCLUDED_PLAYER_H
#define INCLUDED_PLAYER_H

#include <string>


/**
 * @class Player in "Player.h"
 * @brief parent class for all types of users
 */
class Player {
 public:
  /**
  * @brief constructor for player
  * @param name the name of the player 
  * @param symbol the symbol that the player is using
  */
  explicit  Player(std::string name = "Unknown", char symbol = DEFAULT_SYMBOL);

  /**
  * @brief gets the choice of which box to select from the user
  * @param boxes the list of boxes
  * @detail allows the user to choose the box they would like
  *  use, if the user inputs a box already selected, the user
  *  will be asked to select another box.
  * @return int the box that the user has chosen
  * 
  */
  void getChoice(char boxes[]);

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
  *         name:     player_name
  *         symbol:   player_symbol
  *         score:    player_score
  */
  void display();


 protected:
  std::string name = "Unknown";
  char symbol = '-';
  int score = 0;
  static const char DEFAULT_SYMBOL = '-';
  static const int MINIMUM_BOX_NUMBER = 1;
  static const int MAXIMUM_BOX_NUMBER = 9;
};

/**
* @class User in "Player.h"
* @brief child class to manage the human players
*/
class User : public Player{
 public:
  /**
  * @brief constructor for user
  * @param name the name of the user
  * @param symbol the symbol that the user is using
  */
  explicit User(std::string name = "Unknown", char symbol = '-');

  /**
  * @brief gets the choice of which box to select from the user
  * @param boxes the list of boxes
  * @detail allows the user to choose the box they would like
  *  use, if the user inputs a box already selected, the user
  *  will be asked to select another box.
  * @return int the box that the user has chosen
  * 
  */
  void getChoice(char boxes[]);
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
  * @brief gets the choice of which box to select from the user
  * @param boxes the list of boxes
  * @detail allows the user to choose the box they would like
  *  use, if the user inputs a box already selected, the user
  *  will be asked to select another box.
  * @return int the box that the user has chosen
  */
  void getChoice(char boxes[]);
};

#endif  // INCLUDED_PLAYER_H
