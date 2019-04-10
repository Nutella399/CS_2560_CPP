#include "pch.h"
#include "Employee.h"

class InvalidEmployeeNumber : public std::exception {
	virtual const char* what() const throw() {
		return "That was not a number between 0 and 9999";
	}
};

Employee::Employee(std::string name, int number, int date) {
	m_name = name; 
	if (number < 0 || number > 9999) {
		throw InvalidEmployeeNumber(); 
	}else {
		m_number = number;
	}
	m_date = date; 
}

void Employee::setName(std::string name) {
	m_name = name; 
}
std::string Employee::getName() {
	return m_name; 
}
void Employee::setNumber(int number) {
	if (number < 0 || number > 9999) {
		throw InvalidEmployeeNumber();
	}
	else {
		m_number = number;
	}
	m_number = number;
}
int Employee::getNumber() {
	return m_number; 
}
void Employee::setDate(int date) {
	m_date = date;
}
int Employee::getDate() {
	return m_date;
}