#include <assert.h>

#include "spec_helper.h"
#include "player_test.h"
#include "player.h"
#include "board.h"

void test_player_piece() {
  Player* player = create_player('X', &fake_move);
  assert(player->piece == 'X');
  destroy_player(player);
}

void test_player_move() {
  Player* player = create_player('X', &fake_move);
  Board* board = new_board(3);
  assert(player->get_move(board, 'X', 'O') == 0);
  destroy_board(board);
  destroy_player(player);
}

void player_test() {
  test_player_piece();
  success();
  test_player_move();
  success();
}
