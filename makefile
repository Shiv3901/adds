play: *.cpp
	g++ -o main.out -std=c++11 -O2 -Wall *.cpp
	./main.out < test.txt
	
remove:
	rm main.out
