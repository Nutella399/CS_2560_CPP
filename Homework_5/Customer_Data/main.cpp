#include "pch.h"
#include <iostream>
#include "CustomerData.h"

using namespace std; 

void printCustomerData(CustomerData cd) {
	cout << cd.getlastname() << "\n";
	cout << cd.getfirstname() << "\n";
	cout << cd.getaddress() << "\n";
	cout << cd.getcity() << "\n";
	cout << cd.getstate() << "\n";
	cout << cd.getzip() << "\n";
	cout << cd.getphone() << "\n";
	cout << cd.getcustomernumber() << "\n";
	cout << cd.getmailinglist() << "\n";
	cout << "\n";
}



int main(){
	CustomerData cd = CustomerData("Yap", "Daniel", "1324 Place", "Pomona", "California", 91768, 6213876345, 87, true);
	printCustomerData(cd); 
	cd.setlastname("Romero");
	cd.setaddress("10943 Somewhere");
	cd.setcity("Rochester");
	cd.setstate("New York");
	cd.setzip(12345);
	cd.setphone(6612793829);
	cd.setcustomernumber(90);
	cd.setmailinglist(false);
	printCustomerData(cd);

}

