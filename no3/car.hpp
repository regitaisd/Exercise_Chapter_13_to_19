#define car_hpp
#ifndef car_hpp
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
		void getSpeed();
		void getYearModel();
		void getMake();
		void setSpeed();
		void acceleration();
		void brake();
		void display();
};

#endif /*car_hpp*/
