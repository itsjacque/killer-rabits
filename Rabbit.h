//
//  rabbit.hpp
//  CS 32 Project 1
//
//  Created by Jacqueline Nguyen on 1/14/23.
//

#ifndef rabbit_hpp
#define rabbit_hpp

#include <stdio.h>

class Arena;

class Rabbit
{
  public:
      // Constructor
    Rabbit(Arena* ap, int r, int c);

      // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;

      // Mutators
    void move();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
    int    m_idleTurnsRemaining;
};


#endif /* rabbit_hpp */
