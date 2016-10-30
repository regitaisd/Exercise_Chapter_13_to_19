#ifndef car_hpp
#define car_hpp

#include <iostream>
#include <string>
using namespace std;

class Car{
	private:
		int yearModel;
		string make;
		int speed;
	public:
		Car();
		Car(int yearModel, string make);
		int getSpeed();
		int getYearModel();
		string getMake();
		int acceleration();
		int brake();
		void display(int);
};

#endif /*car_hpp*/
