#include "pch.h"
#include "Stack.h"
//using namespace std;

int main() {
	try {
		Stack<int> si(5);

		std::cout << "si size: " << si.size() << std::endl;
		std::cout << "si top: " << si.top() << std::endl;

		//c++11 range based for loop  increment through nums with index i
		for (int i : nums) {
			si.push(i);
		}

		std::cout << "si top after pushes: " << si.top() << std::endl;
		std::cout << "si is " << (si.isFull() ? "" : "not ") << "full" << std::endl;

		while (!si.isEmpty()) {
			std::cout << "popped " << si.pop() << std::endl;
		}
	}
	catch (StackExeption & e) {
		std::cout << "Stack error: " << e.what() << std::endl;
	}

	try {
		Stack<std::string> ss(5);

		std::cout << "ss size: " << ss.size() << std::endl;
		std::cout << "ss top: " << ss.top() << std::endl;

		for (const char * s : strs) {
			ss.push(s);
		}

		std::cout << "ss top after pushes: " << ss.top() << std::endl;
		std::cout << "ss is " << (ss.isFull() ? "" : "not ") << "full" << std::endl;

		while (!ss.isEmpty()) {
			std::cout << "popped " << ss.pop() << std::endl;
		}
	}
	catch (StackExeption & e) {
		std::cout << "Stack error: " << e.what() << std::endl;
	}

	return 0;
}