#include "pch.h"
#include <iostream>

template <typename T>
T max(T x, T y) {
	return(x > y ? x : y); 
}

template <typename T>
T min(T x, T y) {
	return(x < y ? x : y);
}

int main(){
    
	int x = 8; 
	int y = 10; 
	
	std::cout << "max:" << max<int>(x, y) << "\n";
	std::cout << "min:" << min<int>(x, y) << "\n";
}
