//
//  life.cpp
//  GameOfLife
//
//  Created by Micaela Estabillo on 2014-01-04.
//  Copyright (c) 2014 Micaela Estabillo. All rights reserved.
//

#include "life.h"

// only keeps track of live cells
// all other cells are assumed to be dead

int find (int x, int y, std::vector<cell> alive) {
    for (int i = 0; i < alive.size(); i ++) {
        if (alive.at(i).x == x && alive.at(i).y == y)
            return i;
    }
    return -1;
}

void life (std::vector<cell> &alive, int delta) {
    for (int i = 0; i < delta; i ++) {
        std::vector<cell> temp;
        for (int x = 0; x < BOARD_SIZE; x ++) {
            for (int y = 0; y < BOARD_SIZE; y ++) {
                //check if neighbours are found
                int neighbours = 0;
                int l = x - 1;
                int r = x + 1;
                int t = y - 1;
                int b = y + 1;
                //LEFT
                if (x != 0) {
                    if (find (l,y,alive) > -1) neighbours ++;
                    //TOPLEFT
                    if (y != 0) {
                        if (find (l,t,alive) > -1) neighbours ++;
                    }
                    //BOTTOMLEFT
                    if (y != BOARD_SIZE - 1) {
                        if (find (l,b,alive) > -1) neighbours ++;
                    }
                }
                //RIGHT
                if (x != BOARD_SIZE - 1) {
                    if (find (r,y,alive) > -1) neighbours ++;
                    //TOPRIGHT
                    if (y != 0) {
                        if (find (r,t,alive) > -1) neighbours ++;
                    }
                    //BOTTOMRIGHT
                    if (y != BOARD_SIZE - 1) {
                        if (find (r,b,alive) > -1) neighbours ++;

                    }
                }
                //TOP
                if (y != 0) {
                    if (find (x,t,alive) > -1) neighbours ++; 
                }
                //BOTTOM
                if (y != BOARD_SIZE - 1) {
                    if (find (x,b,alive) > -1) neighbours ++;
                }
                if (neighbours == 2 || neighbours == 3) {
                    temp.resize (temp.size() + 1);
                    temp.at(temp.size() - 1).x = x;
                    temp.at(temp.size() - 1).y = y;
                }
            }
        }
        alive.swap(temp);
    }
}





