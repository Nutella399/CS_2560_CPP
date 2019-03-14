#pragma once
#include "PatientAccount.h"
#include <iostream>

class Pharmacy{
private: 
	const std::string vicodin_name = "Vicodin";
	const int vicodin_cost = 25;
	const std::string simvastatin_name = "Simvastatin";
	const int simvastatin_cost = 25;
	const std::string crestor_name = "Crestor";
	const int crestor_cost = 35;
	const std::string lyrica_name = "Lyrica";
	const int lyrica_cost = 40;
	const std::string nexium_name = "Nexium";
	const int nexium_cost = 20;
public:
	Pharmacy();
	void addToTotalCharges(PatientAccount &patientaccount, std::string name);
};

