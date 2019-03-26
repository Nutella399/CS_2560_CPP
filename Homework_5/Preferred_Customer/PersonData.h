#pragma once
#include <stdio.h>  
#include <string>

using namespace std;

class PersonData {
protected:

	string m_last_name;
	string m_first_name;
	string m_address;
	string m_city;
	string m_state;
	int m_zip;
	long long m_phone;

public:
	PersonData(string last_name, string first_name, string address, string city, string state, int zip, long long phone);

	string getlastname();
	void setlastname(string last_name);
	string getfirstname();
	void setfirstname(string first_name);
	string getaddress();
	void setaddress(string address);
	string getcity();
	void setcity(string city);
	string getstate();
	void setstate(string state);
	int getzip();
	void setzip(int zip);
	long long getphone();
	void setphone(long long phone);

};
