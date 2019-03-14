#pragma once
#include <iostream>
#include <string>

using namespace std; 

class Date{

private: 
	int m_month; 
	int m_day; 
	int m_year; 

public:
	Date(int month, int day, int year);

	void operator ++ ();
	void operator -- (); 
	int operator - (Date &other_date); 
	friend ostream &operator << (ostream &output, Date date); 
	friend istream &operator >> (istream &input, Date &date); 

	void printMethod1(); 
	void printMethod2(); 
	void printMethod3(); 
	string findMonthName(int month);
	int findMonthDays(int month);
};

