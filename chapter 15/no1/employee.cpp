#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

Employee::Employee(){
	name = " ";
	ID = 0;
	dateHired = 0;
}

Employee::Employee(string name, int ID, int dateHired){
	name = name;
	ID = ID;
	dateHired = dateHired;
}

void Employee::setName(string name){
	this -> name = name;
} 

string Employee::getName(){
	return name;
}

void Employee::setID(int ID){
	this -> ID = ID;
}

int Employee::getID(){
	return ID;
}

void Employee::setDate(int dateHired){
	this -> dateHired = dateHired;
}

int Employee::getDate(){
	return dateHired;
}

productionWorker::productionWorker(){
	shift = 0;
	hourlyPay = 0.0;
}
productionWorker::productionWorker(string name, int ID, int dateHired, int shift, double pay):Employee(name, ID, dateHired){
	shift = shift;
	hourlyPay = pay;
}

int productionWorker::getShift(){
	return shift;
}

double productionWorker::getPay(){
	return hourlyPay;
}
