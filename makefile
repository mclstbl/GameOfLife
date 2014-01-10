CC = g++
DEBUG = -g
LDFLAGS = /System/Library/Frameworks/GLUT.framework/GLUT /System/Library/Frameworks/OpenGL.framework/OpenGL

life : 
	$(CC) test.cpp life.cpp -O3 -o life

life.o : life.h life.cpp test.cpp
	$(CC) test.cpp life.cpp

animation:
	$(CC) $(LDFLAGS) main.cpp life.cpp -O3 -o animation 

animation.o : main.cpp grid.h life.cpp life.h
	$(CC) $(LDFLAGS) main.cpp life.cpp

clean:
	\rm *.o *~ life

tar:
	tar cfv life.tar life.h life.cpp main.cpp
