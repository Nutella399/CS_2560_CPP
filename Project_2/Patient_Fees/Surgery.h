#pragma once
#include "PatientAccount.h"
#include <iostream>

class Surgery{

private: 
	const std::string c_section_name= "C-Section"; 
	const int c_section_cost = 235; 
	const std::string circumcision_name = "Circumcision";
	const int circumcision_cost = 25;
	const std::string broken_bone_repair_name = "Broken Bone Repair";
	const int broken_bone_repair_cost = 125;
	const std::string atherectomy_name = "Atherectomy";
	const int atherectomy_cost = 400;
	const std::string hysterectomy_name = "Hysterectomy";
	const int hysterectomy_cost = 205;

public:
	Surgery();
	void addToTotalCharges(PatientAccount &patientaccount, std::string name);
};

