#include "pch.h"
#include <iostream>
#include "PreferredCustomer.h"

using namespace std; 

int main(){
	PreferredCustomer pc = PreferredCustomer("Yap", "Daniel", "1324 Place", "Pomona", "California", 91768, 6213876345, 87, true, 499);
	cout << pc.getpurchasesamount() << "\n";
	cout << pc.getdiscountlevel() << "\n";
	
	pc.setpurchasesamount(500); 
	cout << pc.getpurchasesamount() << "\n";
	cout << pc.getdiscountlevel() << "\n";

	pc.setpurchasesamount(1100);
	cout << pc.getpurchasesamount() << "\n";
	cout << pc.getdiscountlevel() << "\n";

	pc.setpurchasesamount(1700);
	cout << pc.getpurchasesamount() << "\n";
	cout << pc.getdiscountlevel() << "\n";

	pc.setpurchasesamount(2200);
	cout << pc.getpurchasesamount() << "\n";
	cout << pc.getdiscountlevel() << "\n";

	pc.setpurchasesamount(-2200);
	cout << pc.getpurchasesamount() << "\n";
	cout << pc.getdiscountlevel() << "\n";
}
