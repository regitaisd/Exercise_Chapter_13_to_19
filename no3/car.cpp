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
	this -> speed = 0;
}

void Car::getYearModel(){
	return yearModel;
}

void Car::getMake(){
	return make;
}

void Car::getSpeed(){
	return speed;
}

void Car::setSpeed(){
	this -> speed = speed;
}

void Car::acceleration(){
	return speed + 5;
}

void Car::brake(){
	return speed - 5;
}

void Car::display(){
	
}
