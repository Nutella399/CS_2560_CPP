#include "pch.h"
#include <iostream>
#include "ProductionWorker.h"


int main(){
    //std::cout << "Hello World!\n"; 
	try {
		ProductionWorker pw = ProductionWorker("Ruth Nuttall", -456, 541998, 1, 12.5);
	}
	catch(std::exception& e){
		std::cout << e.what() << "\n"; 
	}

	try {
		ProductionWorker pw = ProductionWorker("Ruth Nuttall", 456, 541998, 10, 12.5);
	}
	catch (std::exception& e) {
		std::cout << e.what() << "\n";
	}

	try {
		ProductionWorker pw = ProductionWorker("Ruth Nuttall", 456, 541998, 0, -12.5);
	}
	catch (std::exception& e) {
		std::cout << e.what() << "\n";
	}
	
}