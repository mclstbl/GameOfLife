CC = g++
DEBUG = -g

life : 
	$(CC) main.cpp life.cpp -o life

life.o : life.h life.cpp main.cpp
	$(CC) main.cpp life.cpp

clean:
	\rm *.o *~ life

tar:
	tar cfv life.tar life.h life.cpp main.cpp
