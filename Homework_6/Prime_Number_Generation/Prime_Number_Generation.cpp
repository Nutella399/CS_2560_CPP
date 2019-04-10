#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>

void check_for_prime(int n) {
	int j = 1;
	int i = 0; 
	bool prime = true; 
	while (true) {
		if (n <= 3) {
			std::cout << n << " ";
			break; 
		}
		else if (n % 2 == 0 || n % 3 == 0) {
			prime = false; 
			break; 
		}
		for (int i = 5; i*i <= n; i=i+6) {
			if (n%i == 0 || n%(i+2) == 0) {
				prime = false; 
				break; 
			}
		}
		break; 
	}
	if (prime) {
		std::cout << n << " ";
	}
	
}

int main(){
	std::vector<int> all_numbers;
	int size = 0; 
	std::cout << "What number do you want to stop at?";
    std::cin >> size;

	for (int i = 2; i <= size; i++) {
		all_numbers.push_back(i); 
	}

	for_each(all_numbers.begin(), all_numbers.end(), check_for_prime); 
}