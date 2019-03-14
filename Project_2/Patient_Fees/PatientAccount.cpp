#include "pch.h"
#include "PatientAccount.h"


PatientAccount::PatientAccount(int days_spent){
	m_total_charges = 0;
	m_days_spent = days_spent; 

}

int PatientAccount::checkOut() {
	m_total_charges += m_daily_rate * m_days_spent; 
	return m_total_charges; 
}
