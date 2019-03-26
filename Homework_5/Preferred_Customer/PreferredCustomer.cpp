#include "pch.h"
#include "PreferredCustomer.h"


PreferredCustomer::PreferredCustomer(string last_name, string first_name, string address, string city, string state, int zip, long long phone, int customer_number, bool mailing_list, double purchases_amount) : CustomerData(last_name, first_name, address, city, state, zip, phone, customer_number, mailing_list){
	setpurchasesamount(purchases_amount);
	setdiscountlevel(m_purchases_amount); 
}

double PreferredCustomer::getpurchasesamount() {
	return m_purchases_amount; 
}
void PreferredCustomer::setpurchasesamount(double purchase_amount) {
	if (purchase_amount >= 0) {
		m_purchases_amount = purchase_amount;
	}else {
		std::cout << "You can't have negative purchase amount. It will now be set to 0 \n";
		m_purchases_amount = 0; 
	}
	setdiscountlevel(m_purchases_amount);
	 
}
double PreferredCustomer::getdiscountlevel() {
	return m_discount_level; 
}
void PreferredCustomer::setdiscountlevel(double purchase_amount) {
	if (purchase_amount >= 500 && purchase_amount < 1000) {
		m_discount_level = 0.05; 
	}else if (purchase_amount >= 1000 && purchase_amount < 1500) {
		m_discount_level = 0.06;
	}else if (purchase_amount >= 1500 && purchase_amount < 2000) {
		m_discount_level = 0.07;
	}else if (purchase_amount >= 2000) {
		m_discount_level = 0.1;
	}else {
		m_discount_level = 0.0;
	}
}
