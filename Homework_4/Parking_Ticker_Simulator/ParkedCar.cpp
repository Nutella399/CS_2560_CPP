#include "pch.h"
#include <iostream>
#include "ParkedCar.h"


using namespace std;
 
ParkedCar::ParkedCar(string make, string model, string color, int license_number, int minutes_parked) {
	m_make = make;
	m_model = model;
	m_color = color;
	m_license_number = license_number;
	m_minutes_parked = minutes_parked;
}

ParkedCar::~ParkedCar(){
}
