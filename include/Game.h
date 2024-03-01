/**
 * @author James Huston | jamzhuston@gmail.com
 * @date 28/02/2024
 * 
 *
 */



#ifndef INCLUDED_GAME_H
#define INCLUDED_GAME_H


#include <iostream>
#include <string>
#include "Player.h"



/**
 * @class Game in "Game.h"
 * @brief 
 *
 *
 */
class Game {
 public:
  /**
   * @brief default constructor for game
   *
   */
  Game();

  /**
   * @brief function to manage the game with two people
   * @param player1 one of the players
   * @param player2 one of the players
   */
  void play(User player1, User player2);

  /**
   * @brief function to manage the game with one person
   * @param player1 the player
   * @param ai the ai to defeat the player
   */
  void play(User player1, AI ai);

  /**
   * @brief function to print the game board to the screen
   */
  void printScreen();

  /**
   * @brief function to check if a user has won,
   * @return string either the symbol of the winner,
   * or an empty string
   */
  std::string checkWinner();

  /**
   * @brief function to anounce the winner, display each of the scores
   *        and ask the user(s) if they want to play again.
   */
  void concludeGame();

 private:
  int boxes[];

}

# endif // GAME_H_INCLUDED
