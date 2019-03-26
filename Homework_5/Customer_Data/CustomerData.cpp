#include "pch.h"
#include "CustomerData.h"


CustomerData::CustomerData(string last_name, string first_name, string address, string city, string state, int zip, long long phone, int customer_number, bool mailing_list)
	: PersonData(last_name, first_name, address, city, state, zip, phone) {
	m_customer_number = customer_number;
	m_mailing_list = mailing_list;
}

void CustomerData::setcustomernumber(int customer_number) {
	m_customer_number = customer_number; 
}
int CustomerData::getcustomernumber() {
	return m_customer_number; 
}
void CustomerData::setmailinglist(bool mailing_list) {
	m_mailing_list = mailing_list; 
}
bool CustomerData::getmailinglist() {
	return m_mailing_list; 
}