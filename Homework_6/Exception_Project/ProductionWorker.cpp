#include "pch.h"
#include "ProductionWorker.h"

class InvalidShift : public std::exception {
	virtual const char* what() const throw() {
		return "That is a invalid shift";
	}
};

class InvalidPayRate : public std::exception {
	virtual const char* what() const throw() {
		return "That is a negative number which isn't allowed.";
	}
};

ProductionWorker::ProductionWorker(std::string name, int number, int date, int shift, double pay_rate) : Employee(name, number, date){ 
	if (pay_rate < 0) {
		throw InvalidPayRate();
	}
	else {
		m_pay_rate = pay_rate;
	}

	if (!(shift == 0 || shift == 1)) {
		throw InvalidShift();
	}
	else {
		m_shift = shift;
	}

	 
}
void ProductionWorker::setShift(int shift) {
	if (shift != 0 || shift != 1) {
		throw InvalidShift();
	}
	else {
		m_shift = shift;
	}
}
int ProductionWorker::getShift() {
	return m_shift; 
}
void ProductionWorker::setPayRate(double pay_rate) {
	if (pay_rate < 0) {
		throw InvalidPayRate();
	}
	else {
		m_pay_rate = pay_rate;
	}
}
double ProductionWorker::getPayRate() {
	return m_pay_rate; 
}