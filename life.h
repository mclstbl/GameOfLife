//
//  life.h
//  GameOfLife
//
//  Created by Micaela Estabillo on 2014-01-04.
//  Copyright (c) 2014 Micaela Estabillo. All rights reserved.
//


#ifndef LIFE_H
#define LIFE_H
 
#include <iostream>
#include <vector>

#define BOARD_SIZE 10
#define BOARD_2 BOARD_SIZE * BOARD_SIZE
#define X_INCREMENT 1
#define Y_INCREMENT 1


struct cell {
    int x;
    int y;
};

int find (int x, int y, std::vector<cell> alive);
void life (std::vector<cell> &alive, int delta);
 
#endif
