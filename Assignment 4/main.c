#include <stdio.h>
#include "library.h"
#include <string.h>


const char* determine_winner(const char* Player1, const char* Player2) {
	if (strcmp(Player1, Player2) == 0) {
		return "Draw";
	}
	if ((strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Scissors") == 0) ||
		(strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Rock") == 0) ||
		(strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Paper") == 0)){
			return "Player1";
	}
	if ((strcmp(Player2, "Rock") == 0 && strcmp(Player1, "Scissors") == 0) ||
		(strcmp(Player2, "Paper") == 0 && strcmp(Player1, "Rock") == 0) ||
		(strcmp(Player2, "Scissors") == 0 && strcmp(Player1, "Paper") == 0)) {
			return "Player2";
	}
	return "Invalid";

}