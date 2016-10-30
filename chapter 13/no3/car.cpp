#include "car.hpp"
#include <iostream>
#include <string>
using namespace std;

Car::Car(){
	this -> yearModel = 0;
	this -> make = " ";
	this -> speed = 0;
}

Car::Car(int yearModel, string make){
	this -> yearModel = yearModel;
	this -> make = make;
}

int Car::getYearModel(){
	return yearModel;
}

string Car::getMake(){
	return make;
}

int Car::getSpeed(){
	return speed;
}

int Car::acceleration(){
	return speed += 5;
}

int Car::brake(){
	return speed -= 5;
}

void Car::display(int x){
	cout << "the current speed " << x << " is: " << this -> speed << endl;
	
}
