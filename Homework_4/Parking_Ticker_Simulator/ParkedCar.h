#pragma once
#include <iostream>

class ParkedCar{
private: 
	std::string m_make; 
	std::string m_model; 
	std::string m_color;
	int m_license_number; 
	int m_minutes_parked;

public:
	ParkedCar(std::string make, std::string model, std::string color, int license_number, int minutes_parked);
	~ParkedCar();

	friend class ParkingTicket;
	friend class PoliceOfficer;
};
