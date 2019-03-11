#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
	string name;
	int idNumber;
	string department;
	string position;

public:

	Employee(string name, int idNumber, string department, string postition) {
		this->name = name;
		this->idNumber = idNumber;
		this->department = department;
		this->position = postition;
	}

	Employee(string name, int idNumber) {
		this->name = name;
		this->idNumber = idNumber;
		department = "";
		position = "";
	}

	Employee() {
		name = "";
		idNumber = 0;
		department = "";
		position = "";
	}

	void setName(string name) {
		this->name = name;
	}

	void setIdNumber(int idNumber) {
		this->idNumber = idNumber;
	}

	void setDepartment() {
		this->department = department;
	}

	void setPosition() {
		this->position = position;
	}

	string getName() {
		return name;
	}

	int getIdNumber() {
		return idNumber;
	}

	string getDepartment() {
		return department;
	}

	string getPosition() {
		return position;
	}

	void print() {
		cout << "Name of Employee: " << name << endl;
		cout << "ID Number of Employee: " << idNumber << endl;
		cout << "Department of Employee: " << department << endl;
		cout << "Position of Employee: " << position << endl;
		cout << endl;
	}
};

int main() {

	Employee Susan("Susan Myers", 47899, "Accounting", "Vice President");
	Employee Mark("Mark Jones", 39119, "IT", "Programmer");
	Employee Joy("Joy Rogers", 81774, "Manufacturing", "Engineer");

	Susan.print();
	Mark.print();
	Joy.print();

	return 0;
}