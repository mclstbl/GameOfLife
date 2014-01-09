CC = g++
DEBUG = -g
LDFLAGS = -F/System/Library/Frameworks/GLUT.framework/GLUT -F/System/Library/Frameworks/OpenGL.framework/OpenGL

life : 
	$(CC) test.cpp life.cpp -o life

life.o : life.h life.cpp test.cpp
	$(CC) test.cpp life.cpp

animation:
	$(CC) -o animation  main.cpp life.cpp $(LDFLAGS)

animation.o : main.cpp grid.h life.cpp life.h
	$(CC) $(LDFLAGS) main.cpp life.cpp


clean:
	\rm *.o *~ life

tar:
	tar cfv life.tar life.h life.cpp main.cpp
