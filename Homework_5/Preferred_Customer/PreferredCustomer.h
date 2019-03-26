#pragma once
#include <iostream>
#include "CustomerData.h"


class PreferredCustomer : CustomerData{
protected: 
	double m_purchases_amount; 
	double m_discount_level; 

public:
	PreferredCustomer(string last_name, string first_name, string address, string city, string state, int zip, long long phone, int customer_number, bool mailing_list, double purchases_amount);
	
	double getpurchasesamount(); 
	void setpurchasesamount(double purchase_amount);
	double getdiscountlevel();
	void setdiscountlevel(double purchase_amount);

};

