install: field.cpp referee.cpp player.cpp human_player.cpp computer_player.cpp
	clang++ field.cpp referee.cpp player.cpp human_player.cpp computer_player.cpp -o play
	./play
	rm play
