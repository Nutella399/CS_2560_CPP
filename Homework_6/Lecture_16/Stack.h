//#include "pch.h"
//#include "Stack.h"
#include <iostream>
#include <string>
#include <exception>


//constexpr, C++11, is like const but can apply to functions and constructors 
//means the value is constant and if possible computed at compile time   
constexpr int nums[] = { 1, 2, 3, 4, 5 };
//constexpr makes strs a const pointer. 
//The const in const char * makes strs point to const char
constexpr const char * strs[] = { "one", "two", "three", "four", "five" };


//******** START HEADER FILE HERE  *************

// simple exception class  inherit from standard exception class
class StackExeption : public std::exception {
	const char * msg;
	StackExeption() {};    // no default constructor
public:
	//explicit means argument value must be assigned with constructor only! 
	//exception specification 
	//throw() means that if an exception is thrown call std::unexpected  
	explicit StackExeption(const char * s) throw() : msg(s) { }
	virtual const char * what() const throw() { return msg; }
};




// simple fixed-size LIFO, Last In First Out, stack template
template <typename T>
class Stack {
private:
	//can be reused by multiple instances
	static const int defaultSize = 10;
	static const int maxSize = 1000;

	int _size;      //current number of items in stack
	int _top;       //
	T * stackPtr;
public:
	explicit Stack(int s = defaultSize);
	~Stack() { delete[] stackPtr; } //prevent memory leak by deleting dynamic memory
	T & push(const T &);
	T & pop();
	bool isEmpty() const { return _top < 0; }
	bool isFull() const { return _top >= _size - 1; }
	int top() const { return _top; }
	int size() const { return _size; }
};


template <typename T>
Stack<T>::Stack(int s) {
	if (s > maxSize || s < 1) throw StackExeption("invalid stack size");
	else _size = s;
	stackPtr = new T[_size];
	_top = -1; //because it is upside down index 0 is bottom point below
}

template <typename T>
T & Stack<T>::push(const T & i) {
	if (isFull()) throw StackExeption("stack full");
	return stackPtr[++_top] = i; //increment and push hence first would be [0]
}

template <typename T>
T & Stack<T>::pop() {
	if (isEmpty()) throw StackExeption("stack empty");
	return stackPtr[_top--];
}

//*************END HEADER FILE HERE **************



