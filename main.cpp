//
//  main.cpp
//  GameOfLife
//
//  Created by Micaela Estabillo on 2014-01-04.
//  Copyright (c) 2014 Micaela Estabillo. All rights reserved.
//

#include "grid.h"

std::vector<cell> alive;

void display(void) {
    glClearColor(255, 255, 255, 0);
    glColor3d(0, 0, 0);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    for (int i = 0; i < alive.size(); i ++) {
        glBegin(GL_QUADS);
        glVertex2i(TLX, TLY);
        glVertex2i(TRX, TRY);
        glVertex2i(BRX, BRY);
        glVertex2i(BLX, BLY);
        glEnd();
        glFlush();
    }

    glutSwapBuffers();
    life (alive,1);
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluOrtho2D(0, width, height, 0);
    glMatrixMode(GL_MODELVIEW);

}

void idle(void) {
    glutPostRedisplay();
}


int main(int argc, char **argv) {
    //generate live cells
    for (int i = BOARD_SIZE / 3 ,j = BOARD_SIZE / 3; i < BOARD_SIZE * 2 / 3 && j < BOARD_SIZE * 2 / 3; i += X_INCREMENT,j += Y_INCREMENT){
        alive.resize(alive.size() + 1);
        alive.at(alive.size() - 1).x = i;
        alive.at(alive.size() - 1).y = j;
    }

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(400, 400);
    glutSetWindowTitle("Game of Life");

    glutCreateWindow("Game of Life");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(idle);

    glutMainLoop();
    
    return 0;
}
