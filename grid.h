//
//  grid.h
//  GameOfLife
//
//  Created by Micaela Estabillo on 2014-01-06.
//  Copyright (c) 2014 Micaela Estabillo. All rights reserved.
//

#ifndef BOARD_H
#define BOARD_H

#include "life.h"
#include <GLUT/glut.h>

#define CELL_SIZE 5
#define TLX alive.at(i).x * CELL_SIZE
#define TLY alive.at(i).y * CELL_SIZE

#define TRX alive.at(i).x * CELL_SIZE + CELL_SIZE
#define TRY alive.at(i).y * CELL_SIZE

#define BLX alive.at(i).x * CELL_SIZE
#define BLY alive.at(i).y * CELL_SIZE + CELL_SIZE

#define BRX alive.at(i).x * CELL_SIZE + CELL_SIZE
#define BRY alive.at(i).y * CELL_SIZE + CELL_SIZE


void display(void);
void reshape(int width, int height);
void idle(void);

#endif /* defined(__GameOfLife__board__) */
