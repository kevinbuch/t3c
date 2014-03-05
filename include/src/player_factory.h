#ifndef PLAYER_FACTORY_H
#define PLAYER_FACTORY_H

#include "player.h"

typedef enum {
  difficult,
  medium,
  easy,
  human
} PlayerType;

Player* build_player(char piece, PlayerType type);

#endif

