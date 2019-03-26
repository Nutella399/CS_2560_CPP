#pragma once
#include "PersonData.h"

class CustomerData : public PersonData{
protected: 
	int m_customer_number; 
	bool m_mailing_list; 

public:
	CustomerData(string last_name, string first_name, string address, string city, string state, int zip, long long phone, int customer_number, bool mailing_list);
	
	void setcustomernumber(int customer_number); 
	int getcustomernumber(); 
	void setmailinglist(bool mailing_list);
	bool getmailinglist();
};

