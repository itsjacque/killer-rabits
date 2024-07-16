//
//  game.hpp
//  CS 32 Project 1
//
//  Created by Jacqueline Nguyen on 1/15/23.
//

#ifndef Game_h
#define Game_h

#include <stdio.h>
#include <iostream>
class Arena;
using namespace std;

class Game
{
  public:
      // Constructor/destructor
    Game(int rows, int cols, int nRabbits);
    ~Game();

      // Mutators
    void play();

  private:
    Arena* m_arena;

      // Helper functions
    string takePlayerTurn();
};

#endif /* game_hpp */
