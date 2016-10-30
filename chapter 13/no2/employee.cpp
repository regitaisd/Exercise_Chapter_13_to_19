#include "employee.hpp"
#include <iostream>
using namespace std;

Employee::Employee(string name, int idNumber, 
                   string department, string position){
	this -> name = name;
	this -> idNumber = idNumber;
	this -> department = department;
	this -> position = position;
}

Employee::Employee(string name, int idNumber){
	this -> name = name;
	this -> idNumber = idNumber;
	this -> department = " ";
	this -> position = " ";
}

Employee::Employee(){
	this -> name = " ";
	this -> idNumber = 0;
	this -> department = " ";
	this -> position = " ";
}

void Employee::printEmployee(){
	cout << name << "\n" << idNumber << "\n" << department << "\n" << position;
	cout << endl << endl;
}
