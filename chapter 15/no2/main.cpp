#include <iostream>
#include <string>
#include "employee.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string name;
	int id;
	int date;
	double pay;
	double bonus;
	
	cout << "Enter name of supervisor: ";
	cin >> name;
	cout << "Enter supervisor ID: ";
	cin >> id;
	cout << "Enter date hired: ";
	cin >> date;
	cout << "Enter annual salary: ";
	cin >> pay;
	cout << "Enter annual production bonus: ";
	cin >> bonus;
	
	stateSupervisor s;
	s.setName(name);
	s.setID(id);
	s.setDate(date);
	s.setSalary(pay);
	s.setBonus(bonus);
	
	cout << endl;
	
	cout << "Name of Supervisor: " << s.getName() << endl;
	cout << "ID of Supervisor: " << s.getID() << endl;
	cout << "Date Hired: " << s.getDate() << endl;
	cout << "Annual Salary: " << s.getSalary() << endl;
	cout << "Annual Production Bonus: " << s.getBonus();
	
	return 0;
}
