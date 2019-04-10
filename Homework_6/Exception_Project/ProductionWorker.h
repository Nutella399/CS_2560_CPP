#pragma once
#include "Employee.h"
class ProductionWorker : public Employee{
private: 
	int m_shift; 
	double m_pay_rate;

public:
	ProductionWorker(std::string name, int number, int date, int shift, double pay_rate);

	void setShift(int shift); 
	int getShift(); 
	void setPayRate(double pay_rate);
	double getPayRate(); 
};

