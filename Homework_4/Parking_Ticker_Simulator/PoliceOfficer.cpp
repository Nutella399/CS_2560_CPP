#include "pch.h"
#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"


using namespace std;


PoliceOfficer::PoliceOfficer(string name, int badge_number){
	m_name = name; 
	m_badge_number = badge_number; 
}


PoliceOfficer::~PoliceOfficer(){
}

ParkingTicket PoliceOfficer::giveParkingTicket(ParkedCar &parkedcar, ParkingMeter &parkingmeter, PoliceOfficer &policeofficer) {
	ParkingTicket parkingticket = ParkingTicket();
	if (parkedcar.m_minutes_parked > parkingmeter.m_minutes_purchased) {
		parkingticket.m_make = parkedcar.m_make;
		parkingticket.m_model = parkedcar.m_model;
		parkingticket.m_color = parkedcar.m_color;
		parkingticket.m_license_number = parkedcar.m_license_number;
		m_name = policeofficer.m_name;
		m_badge_number = policeofficer.m_badge_number;
		double time = parkedcar.m_minutes_parked - parkingmeter.m_minutes_purchased;
		if (time > 60) {
			parkingticket.m_amount_due = (ceil((time / 60) - 1) * 10) + 25;
		}
		else if (time == 60) {
			parkingticket.m_amount_due = 25;
		}
		cout << "This car did get a ticket.\n";
		cout << "They have to pay:" << parkingticket.m_amount_due; 
	}else {
		cout << "This car didn't get a ticket.\n";
	}
	return parkingticket; 
}


