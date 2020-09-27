#include "Block.h"
const uint32_t genesis_difficulty = 1; // The difficulty of the genesis block (leave as one)
Block GetGenesis() {
  return Block::MineBlock(genesis_difficulty);
}
