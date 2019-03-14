#pragma once

class PatientAccount{

private: 
	const int m_daily_rate = 125; 
	int m_total_charges; 
	int m_days_spent; 

public:
	PatientAccount(int days_spent);

	int checkOut(); 

	friend class Surgery; 
	friend class Pharmacy; 
};


