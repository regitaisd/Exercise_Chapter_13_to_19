#include "info.hpp"
#include <iostream>
#include <string>
using namespace std;

Info::Data(){
	this -> name = " ";
	this -> address = " ";
	this -> age = 0;
	this -> phone = 0;
}

Info::Data(string name, string address, int age, int phone){
	this -> name = name;
	this -> address = address;
	this -> age = age;
	this -> phone = phone;
}

string Info::getName(){
	cin >> name;
	return name;
}

string Info::getAddress(){
	cin >> address;
	return address;
}

int Info::getAge(){
	cin >> age;
	return age;
}

int Info::getPhone(){
	cin >> phone;
	return phone;
}
