#ifndef __ATTACKS_H__
#define __ATTACKS_H__

#include <bitboard.h>

#define not_file 0ULL

extern Bitboard pawn_attacks[2][64];
extern Bitboard knight_attacks[64];
extern Bitboard king_attacks[64];

void init_attacks();

Bitboard get_pawn_attacks(int square, int color);
Bitboard get_knight_attacks(int square);
Bitboard get_king_attacks(int square);
void init_pawn_attacks();

#endif