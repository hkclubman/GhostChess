#include <iostream>
using namespace std;
#include "board.hpp"

char board[8][8];

int main(void) {

    cout << "Chess program" << endl;
    Board test;

    test.move_piece(1,0, 5,5);
    test.move_piece(0,0, 1,3);
    test.print_board();

    
    return(0);

}
