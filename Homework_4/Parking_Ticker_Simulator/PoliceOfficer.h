#pragma once
class PoliceOfficer{

private: 
	std::string m_name; 
	int m_badge_number; 

public:
	PoliceOfficer(std::string name, int badge_number);
	~PoliceOfficer();

	ParkingTicket giveParkingTicket(ParkedCar &parkedcar, ParkingMeter &parkingmeter, PoliceOfficer &policeofficer);

	friend class ParkingTicket; 
};

