// In_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

int main(){
	double total_scores = 0.0; 
	int counter = 0; 
	double score = 1; 
	bool finished = true; 
	
	while (finished) {
		std::cout << "Give me a test score.";
		std::string string_score;
		std::cin >> string_score;
		score = atof(string_score.c_str());
		if (score != 0) {
			total_scores += score;
			counter++;
		}else {
			finished = false; 
		}
	}
	std::cout << "Counter is: " << counter << "\n";
	std::cout << "Average is: " << total_scores / counter << "\n";

}