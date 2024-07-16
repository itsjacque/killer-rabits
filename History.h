//
//  history.hpp
//  CS 32 Project 1
//
//  Created by Jacqueline Nguyen on 1/15/23.
//

#ifndef History_h
#define History_h

#include <stdio.h>
#include <iostream>
#include "globals.h"

class History
{
  public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    int rows;
    int cols;
    char grid [MAXROWS][MAXCOLS];
};
#endif /* history_hpp */
