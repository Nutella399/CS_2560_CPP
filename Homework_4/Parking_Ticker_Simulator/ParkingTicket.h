#pragma once
class ParkingTicket
{

private: 

	double m_amount_due; 
	std::string m_name;
	int m_badge_number;
	std::string m_make;
	std::string m_model;
	std::string m_color;
	int m_license_number;

public:
	ParkingTicket(); 
	//ParkingTicket(ParkedCar &parkedcar, ParkingMeter &parkingmeter, PoliceOfficer &policeofficer);
	~ParkingTicket();

	friend class PoliceOfficer; 
};

