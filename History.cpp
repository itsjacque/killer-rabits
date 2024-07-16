//
//  history.cpp
//  CS 32 Project 1
//
//  Created by Jacqueline Nguyen on 1/15/23.
//

#include "History.h"
#include <iostream>
#include "globals.h"
using namespace std;

//class History
//{
//  public:
//    History(int nRows, int nCols);
//    bool record(int r, int c);
//    void display() const;
//};

History :: History (int nRows, int nCols) {
    rows = nRows;
    cols= nCols;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            grid[i][j] = '.';
        }
        
    }
};

bool History ::  record(int r, int c) {
    if (r > rows || r < 1 || c > cols || c < 1)
        return false;
    
    if (grid[r-1][c-1] == '.' ) {
        grid[r-1][c-1] = 'A';
    }
    else if ( grid[r-1][c-1] == 'Z') {
        grid[r-1][c-1] = 'Z';
    }
    else{
        grid[r-1][c-1]++;
    }

    
    return true;
};

void History ::  display() const {
    
    clearScreen();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
    cout << endl;
};
