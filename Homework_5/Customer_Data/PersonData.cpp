#include "pch.h"
#include "PersonData.h"


PersonData::PersonData(string last_name, string first_name, string address, string city, string state, int zip, long long phone) {
	m_last_name = last_name; 
	m_first_name = first_name; 
	m_address = address; 
	m_city = city; 
	m_state = state; 
	m_zip = zip; 
	m_phone = phone; 
}

string PersonData::getlastname() {
	return m_last_name; 
}

void PersonData::setlastname(string last_name) {
	m_last_name = last_name; 
}

string PersonData::getfirstname() {
	return m_first_name; 
}

void PersonData::setfirstname(string first_name){
	m_first_name = first_name; 
}
string PersonData::getaddress() {
	return m_address; 
}
void PersonData::setaddress(string address) {
	m_address = address; 
}
string PersonData::getcity() {
	return m_city; 
}

void PersonData::setcity(string city) {
	m_city = city; 
}
string PersonData::getstate() {
	return m_state; 
}
void PersonData::setstate(string state) {
	m_state = state; 
}
int PersonData::getzip() {
	return m_zip; 
}
void PersonData::setzip(int zip) {
	m_zip = zip; 
}
long long PersonData::getphone() {
	return m_phone; 
}
void PersonData::setphone(long long phone) {
	m_phone = phone; 
}
