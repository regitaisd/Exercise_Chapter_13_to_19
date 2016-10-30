#include "year.h"
#include <iostream>
#include <string>
using namespace std;

Day::Day(int day){
	this -> day = day;
}

int Day::setDay(int date){
	this -> day = date;
}

int Day::getDay(){
	return day;
}

void Day::displayDay(){
	for(int i = 0; i < 12; i++){
		if(endDate[i+1] - day >= 0){
			cout << month[i] << " " << day - endDate[i];
			cout << endl;
		}
	}
}
