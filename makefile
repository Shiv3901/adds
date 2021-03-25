all: Transport.o Horse.o main.o
	g++ Transport.o Horse.o main.o -o play1

Transport.o: Transport.cpp Transport.h
	g++ -c Transport.cpp -o Transport.o

Horse.o: Horse.cpp Horse.h
	g++ -c Horse.cpp -o Horse.o

main.o: main.cpp
	g++ -c main.cpp -o main.o

play: play1
	./play1

clean: 
	rm play1 Transport.o Horse.o main.o
