GameOfLife
http://en.wikipedia.org/wiki/Conway's_Game_of_Life
=================


A C++ implementation of a cellular automaton (Conway Game of Life) which saves computation by only storing locations of live cells in a vector and ignoring all others (dead cells).

The "life" executable is a text version of Game of Life

The "animation" executable is an OpenGL animation the same data in "life".

All modifications to the animation can be made by editing the constants defined in the header files life.h and grid.h.

I'm not sure if the executables will work for other platforms, but they definitely do for MAC OS X. I will be updating the MakeFile in the future to account for other platforms.

If the MakeFile registers errors, the following command will compile the animation (MAC OS X):
	g++ /System/Library/Frameworks/GLUT.framework/GLUT /System/Library/Frameworks/OpenGL.framework/OpenGL main.cpp life.cpp -o animation
