GameOfLife
<<<<<<< HEAD
==========

<<<<<<< HEAD
A C++ implementation of a cellular automaton (originally devised by John Conway)

The "life" executable is a text version of Game of Life
"Animation" is an OpenGL animation the same data.

All modifications to the animation can be made by editing the constants defined in the header files life.h and grid.h.

I'm not sure if the executables will work for other platforms, but they definitely do for MAC OS X. I will be updating the MakeFile in the future to account for other platforms.

If the MakeFile registers errors, the following command will compile the animation (MAC OS X):
	g++ /System/Library/Frameworks/GLUT.framework/GLUT /System/Library/Frameworks/OpenGL.framework/OpenGL main.cpp life.cpp -o animation
	
=======
A C++ implementation of a cellular automaton (Conway Game of Life) which saves computation by only storing locations of live cells in a vector and ignoring all others (dead cells).
>>>>>>> 8cfd3da7adf4edf9915c85d98f46eb547efbe1bb
=======
=================
A C++ implementation of a cellular automaton (Conway Game of Life) which saves computation by only storing locations of live cells in a vector and ignoring all others (dead cells).

The "life" executable is a text version of Game of Life
"Animation" is an OpenGL animation the same data.

All modifications to the animation can be made by editing the constants defined in the header files life.h and grid.h.

I'm not sure if the executables will work for other platforms, but they definitely do for MAC OS X. I will be updating the MakeFile in the future to account for other platforms.

If the MakeFile registers errors, the following command will compile the animation (MAC OS X):
	g++ /System/Library/Frameworks/GLUT.framework/GLUT /System/Library/Frameworks/OpenGL.framework/OpenGL main.cpp life.cpp -o animation
	

>>>>>>> 8914b34418f6067653b3985a85c0ba443e353d25
