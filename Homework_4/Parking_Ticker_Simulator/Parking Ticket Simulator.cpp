// Parking Ticket Simulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

using namespace std; 

int main(){
	ParkedCar car1 = ParkedCar("Kia", "Optima", "Blue", 456, 45);
	ParkingMeter meter1 = ParkingMeter(75); 
	PoliceOfficer officer = PoliceOfficer("David", 82945);

	officer.giveParkingTicket(car1, meter1, officer); 

	ParkedCar car2 = ParkedCar("Toy", "Car", "Red", 847, 1440);

	officer.giveParkingTicket(car2, meter1, officer); 
}

