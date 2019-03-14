#include "pch.h"
#include "Date.h"


Date::Date(int month, int day, int year){
	
	if (month <= 12 && month >= 1) {
		m_month = month;
	
	}
	else {
		m_month = 0;
		cout << "That isn't a proper month.\n";
	}

	if (day <= findMonthDays(m_month) && day >= 1) {
		m_day = day;
	}
	else {
		m_day = 0;
		cout << "That isn't a proper day.\n";
	}
	m_year = year; 
}

void Date::operator ++ () {
	m_day += 1;
	if (m_day > findMonthDays(m_month)) {
		m_month += 1; 
		m_day = 1; 
	}
	if(m_month == 12 && m_day == 32) {
		m_month = 1; 
		m_day = 1; 
		m_year += 1; 
	}
}

void Date::operator -- () {
	m_day -= 1;
	if (m_day <= 0) {
		m_month -= 1;
		m_day = findMonthDays(m_month);
	}
	if (m_month == 1 && m_day == 0) {
		m_month = 12;
		m_day = 31;
		m_year -= 1;
	}
}
int Date::operator - (Date &other_date) {
	int result = 0; 
	int date_in_days = m_day; 
	int other_date_in_days = other_date.m_day;
	m_month--; 
	other_date.m_month--;
	while (m_month > 0 || other_date.m_month > 0) {
		if (m_month > 0) {
			date_in_days += findMonthDays(m_month);
			m_month--;
		}
		if (other_date.m_month > 0) {
			other_date_in_days += findMonthDays(other_date.m_month);
			other_date.m_month--;
		}
	}
	date_in_days += (m_year) * 365;
	other_date_in_days += (other_date.m_year) * 365;
	result = date_in_days - other_date_in_days;
	return result;
}

ostream &operator << (ostream &output, Date date) {
	date.printMethod2(); 
	return output; 
}

istream &operator >> (istream &input, Date &date) {
	int temp_day = 0;
	int temp_month = 0;
	bool correct_day = false;
	bool correct_month = false;
	while (correct_month) {
		input >> temp_month;
		if (temp_month <= 12 && temp_month >= 1) {
			date.m_month = temp_month;
			correct_month = true;
		}
		else {
			date.m_month = 0;
			cout << "That isn't a proper month, try again.\n";
		}
	}
	while (correct_day) {
		input >> temp_day;
		if (temp_day <= date.findMonthDays(date.m_month) && temp_day >= 1) {
			date.m_day = temp_day;
			correct_day = true;
		}
		else {
			date.m_day = 0;
			cout << "That isn't a proper day, try again.\n";
		}
	}
	input >> date.m_year; 

	return input; 
}

void Date::printMethod1() {
	cout << m_month << "/" << m_day << "/" << m_year << "\n"; 
}

void Date::printMethod2() {
	cout << findMonthName(m_month) << " " << m_day << ", " << m_year << "\n";
}

void Date::printMethod3() {
	cout << m_day << " " << findMonthName(m_month) << " " << m_year << "\n";
}

string Date::findMonthName(int month) {
	string month_name = "";
	switch (month) {
	case 1:
		month_name = "Janurary";
		break;
	case 2:
		month_name = "Feburary";
		break;
	case 3:
		month_name = "March";
		break;
	case 4:
		month_name = "April";
		break; 
	case 5:
		month_name = "May";
		break; 
	case 6:
		month_name = "June";
		break; 
	case 7:
		month_name = "July";
		break; 
	case 8:
		month_name = "August";
		break; 
	case 9:
		month_name = "September";
		break; 
	case 10:
		month_name = "October";
		break; 
	case 11:
		month_name = "November";
		break; 
	case 12:
		month_name = "December";
		break; 
	default: 
		break; 
	}
	return month_name; 
}

int Date::findMonthDays(int month) {
	int month_days = 0;
	switch (month) {
	case 1:
		month_days = 31;
		break; 
	case 2:
		month_days = 28;
		break; 
	case 3:
		month_days = 31;
		break; 
	case 4:
		month_days = 30;
		break; 
	case 5:
		month_days = 31;
		break; 
	case 6:
		month_days = 30;
		break; 
	case 7:
		month_days = 31;
		break; 
	case 8:
		month_days = 31;
		break; 
	case 9:
		month_days = 30;
		break; 
	case 10:
		month_days = 31;
		break; 
	case 11:
		month_days = 30;
		break; 
	case 12:
		month_days = 31;
		break; 
	}
	return month_days;
}