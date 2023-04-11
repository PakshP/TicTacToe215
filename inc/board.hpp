#ifndef BOARD_H
#define BOARD_H

#include <iostream>

class TicTacToe {
  private:
    char board[3][3];
    void userplay();
    void botplay();
  public:
    TicTacToe();
    void to_string();
    void playgame();
};

#endif
