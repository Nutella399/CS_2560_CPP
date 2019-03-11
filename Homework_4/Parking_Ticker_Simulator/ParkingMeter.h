#pragma once

#ifndef PARKINGMETER_H
#define PARKINGMETER_H
class ParkingMeter{

private: 
	int m_minutes_purchased; 
	
public:
	ParkingMeter(int minutes_purchased);
	~ParkingMeter();

	friend class ParkingTicket;
	friend class PoliceOfficer;
};
#endif
