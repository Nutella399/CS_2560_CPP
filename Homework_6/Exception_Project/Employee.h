#pragma once

#include <stdio.h>
#include <string>

class Employee{
private: 
	std::string m_name; 
	int m_number; 
	int m_date;
	
protected: 
	Employee(std::string name, int number, int date);

public:
	void setName(std::string name);
	std::string getName(); 
	void setNumber(int number);
	int getNumber();
	void setDate(int date);
	int getDate(); 
};

