#include <iostream>
#include <string>
#include "employee.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string name;
	int id;
	int date;
	int shift;
	double pay;
	
	productionWorker w(name, id, date, shift, pay);
	
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter Employee ID: ";
	cin >> id;
	cout << "Enter Date Hired: ";
	cin >> date;
	cout << "Which shift do you take?" << endl;
	cout << "1. Day shift \t 2. Night shift" << endl;
	cin >> shift;
	cout << "Enter Hourly Pay: ";
	cin >> pay;
	
	cout << endl;
	
	cout << "Name of Employee: " << w.getName() << endl;
	cout << "Employee ID: " << w.getID() << endl;
	cout << "Date Hired: " << w.getDate() << endl;
	cout << "Shift: " << w.getShift() << endl;
	if(w.getShift() == 1){
		cout << "Shift: Day shift" << endl;
	}
	else if(w.getShift() == 2){
		cout << "Shift: Night shift" << endl;
	}
	cout << "Hourly Pay: $" << w.getPay();
	
	return 0;
}
