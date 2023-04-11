#include "../inc/board.hpp"

TicTacToe::TicTacToe() {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      this->board[i][j] = ' ';
    }
  }
}

void TicTacToe::to_string() {
  std::cout << "-----" << std::endl;
  std::cout << " 012" << std::endl;
  std::cout << "-----" << std::endl;
  std::cout << "0|"
            << this->board[0][0]
            << this->board[0][1]
            << this->board[0][2]
            << "\n1|"
            << this->board[1][0]
            << this->board[1][1]
            << this->board[1][2]
            << "\n2|"
            << this->board[2][0]
            << this->board[2][1]
            << this->board[2][2]
            << std::endl;
  std::cout << "-----" << std::endl;
}
