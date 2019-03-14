#include "pch.h"
#include "Surgery.h"

using namespace std; 

Surgery::Surgery(){

}

void Surgery::addToTotalCharges(PatientAccount & patientaccount, string name){
	if(name == c_section_name) {
		patientaccount.m_total_charges += c_section_cost; 
	}else if (name == circumcision_name) {
		patientaccount.m_total_charges += circumcision_cost;
	}else if (name == broken_bone_repair_name) {
		patientaccount.m_total_charges += broken_bone_repair_cost; 
	}else if (name == atherectomy_name) {
		patientaccount.m_total_charges += atherectomy_cost; 
	}else if (name == hysterectomy_name) {
		patientaccount.m_total_charges += hysterectomy_cost; 
	}else{
		std::cout << "That isn't a surgery offered here."; 
	}
}
