#include "pch.h"
#include <iostream>
#include <cmath>
#include "ParkingTicket.h"

using namespace std;

ParkingTicket::ParkingTicket() {
	
}

/*ParkingTicket::ParkingTicket(ParkedCar &parkedcar, ParkingMeter &parkingmeter, PoliceOfficer &policeofficer){ 
	m_make = parkedcar.m_make; 
	m_model = parkedcar.m_model; 
	m_color = parkedcar.m_color; 
	m_license_number = parkedcar.m_license_number; 
	m_name = policeofficer.m_name; 
	m_badge_number = policeofficer.m_badge_number; 
	int time = parkedcar.m_minutes_parked - parkingmeter.m_minutes_purchased; 
	if (time > 60) {
		m_amount_due = (ceil((time / 60) - 1) * 10) + 25; 
	}else if(time == 60){
		m_amount_due = 25; 
	}
}*/


ParkingTicket::~ParkingTicket(){
}
