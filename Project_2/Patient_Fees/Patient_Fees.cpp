#include "pch.h"
#include <iostream>
#include <string>
#include "Pharmacy.h"
#include "Surgery.h"
#include "PatientAccount.h"

using namespace std;

int main(){
	int days_spent = 0; 
	string blank = " "; 
	string surgery = " "; 
	string medicine = " "; 
	

    cout << "Hello you must be trying to check out the patient.\n";
	cout << "How many days did the patient spend here?\n";
	cin >> days_spent;
	PatientAccount c_patient_account = PatientAccount(days_spent);
	Pharmacy c_pharmacy = Pharmacy();
	Surgery c_surgery = Surgery();
	cout << "Please state what Surgery they had well here.\n"; 
	getline(cin, blank);
	getline(cin, surgery); 
	c_surgery.addToTotalCharges(c_patient_account, surgery); 
	cout << "Please state what medicine the docotor prescribed to you.\n";
	//getline(cin, blank);
	getline(cin, medicine); 
	c_pharmacy.addToTotalCharges(c_patient_account, medicine); 

	cout << "We will check the patient out now. Your total charges will be:"; 
	cout << c_patient_account.checkOut(); 



}