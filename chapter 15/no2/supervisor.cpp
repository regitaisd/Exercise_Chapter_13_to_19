#include <iostream>
#include <string>
#include "employee.h"
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

stateSupervisor::stateSupervisor(){
	salary = 0;
	bonus = 0;
}

stateSupervisor::stateSupervisor(string name, int ID, int dateHired, double salary, double bonus):Employee(name, ID, dateHired){
	salary = salary;
	bonus = bonus;
}

void stateSupervisor::setSalary(double salary){
	this -> salary = salary;
}

double stateSupervisor::getSalary(){
	return salary;
}

void stateSupervisor::setBonus(double bonus){
	this -> bonus = bonus;
}

double stateSupervisor::getBonus(){
	return bonus;
}
