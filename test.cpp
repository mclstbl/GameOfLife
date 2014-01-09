//
//  main.cpp
//  GameOfLife
//
//  Created by Micaela Estabillo on 2014-01-04.
//  Copyright (c) 2014 Micaela Estabillo. All rights reserved.
//

#include "life.h"
#include <GLUT/glut.h>

using namespace std;

int main(int argc, char** argv){
    int delta;
    vector<cell> alive;

    //generate live cells
    for (int i = BOARD_SIZE / 3 ,j = BOARD_SIZE / 3; i < BOARD_SIZE * 2 / 3 && j < BOARD_SIZE * 2 / 3; i += X_INCREMENT,j += Y_INCREMENT){
        alive.resize(alive.size() + 1);
        alive.at(alive.size() - 1).x = i;
        alive.at(alive.size() - 1).y = j;
    }

    cout << "Enter delta value: ";
    cin >> delta;
    //delta = 100;

    /*
    for (int i = 0; i < alive.size(); i ++) {
        cout << alive[i].x << " " << alive[i].y << "\n";
    }
    */

    life (alive, delta);

	return 0;
}


