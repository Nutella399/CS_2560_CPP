#include "pch.h"
#include <iostream>
#include "Date.h"

int main(){
	Date date1 = Date(3, 4, 2019);
	Date date2 = Date(8, 9, 2000);
	cout << date1.operator-(date2); 
	
	date1.printMethod1();
	cin >> date1; 
	date1.operator++(); 
	cout << date1; 
	date1.operator--(); 
	cout << date1; 
}
