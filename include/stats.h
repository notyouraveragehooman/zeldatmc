#ifndef STATS_H
#define STATS_H

#include "global.h"
#include "item.h"

typedef struct {
	u8 walletType;
	u8 heartPieces;
	u8 health;
	u8 maxHealth;
	u8 filler[8];
	u8 itemOnA;
	u8 itemonB;
	u8 filler2[10];
	u16 rupees;
	u8 filler3[12];
} Stats;

#endif