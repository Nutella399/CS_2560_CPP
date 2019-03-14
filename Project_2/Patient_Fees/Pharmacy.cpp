#include "pch.h"
#include "Pharmacy.h"

using namespace std; 

Pharmacy::Pharmacy(){
	
}

void Pharmacy::addToTotalCharges(PatientAccount & patientaccount, string name) {

	if (name == vicodin_name) {
		patientaccount.m_total_charges += vicodin_cost;
	}
	else if (name == simvastatin_name) {
		patientaccount.m_total_charges += simvastatin_cost;
	}
	else if (name == crestor_name) {
		patientaccount.m_total_charges += crestor_cost;
	}
	else if (name == lyrica_name) {
		patientaccount.m_total_charges += lyrica_cost;
	}
	else if (name == nexium_name) {
		patientaccount.m_total_charges += nexium_cost;
	}
	else {
		std::cout << "That isn't a medicaiton offered here.";
	}
}
