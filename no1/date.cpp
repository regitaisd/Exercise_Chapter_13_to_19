#include "date.hpp"
#include <iostream>
#include <string>
using namespace std;

void Date::printFirstForm(){
	cout << month << "/" << day << "/" << year << endl;
}

void Date::printSecondForm(){
	cout << monthName[month-1] << " " << day << ", " << year << endl;
}

void Date::printThirdForm(){
	cout << day << " " << monthName[month-1] << " " << year;
}
