#include "../inc/main.hpp"

int main() {
  std::cout << "Welcome to TicTacToe!" << std::endl;
  TicTacToe board;
  board.to_string();
  // board.playgame();
  std::cout << "Game Over!" << std::endl;
  return 0;
}
