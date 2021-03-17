install: field.cpp referee.cpp player.cpp human_player.cpp computer_player.cpp 
	clang++ field.cpp referee.cpp player.cpp human_player.cpp computer_player.cpp -o play
	./play


remove:
	rm play

inst: field.cpp Referee.cpp Player.cpp Human.cpp Computer.cpp Avalanche.cpp RandomComputer.cpp
	clang++ field.cpp Referee.cpp Player.cpp Human.cpp Computer.cpp Avalanche.cpp RandomComputer.cpp -o pla
	./pla
	rm pla
