// A_Game_of_21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Die.h"
using namespace std; 

int main(){
	int player_sum = 0;
	int computer_sum = 0;
	const int DIE_SIDES = 6; 
	Die player_die = Die(DIE_SIDES);
	Die computer_die = Die(DIE_SIDES);
	int choice = 0; 
	bool still_playing = true; 

	while (still_playing) {
		cout << "1. You want to roll the dice to accumulate points.\n2. You want to quit.\n";
		cin >> choice; 
		if(choice == 2) {
			still_playing = false; 
		}else if(choice == 1) {
			cout << "Value of your dice: " << player_die.getValue() << "\n";
			player_sum += player_die.getValue();
			cout << "Sum of your rolls: " << player_sum << "\n";
			computer_sum += computer_die.getValue(); 
			player_die.roll(); 
			computer_die.roll(); 
		}
		if (player_sum >= 21) {
			still_playing = false;
		}
	}

	cout << "\n"; 
	cout << "Sum of your rolls: " << player_sum << "\n";
	cout << "Sum of the computer's rolls: " << computer_sum << "\n";
	if(player_sum > computer_sum) {
		cout << "You won!"; 
	}else if(player_sum < computer_sum) {
		cout << "You lose!"; 
	}else {
		cout << "It was a draw.";
	}
}