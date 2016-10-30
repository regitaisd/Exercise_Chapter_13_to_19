#include "car.hpp"
#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	Car c1;
	
	cout << "the initial speed is: " << c1.getSpeed() << endl;
	
	cout << "calling the acceleration function five times and show the speed" << endl;
	
	for(int i = 1; i <= 5; i++){
		c1.acceleration();
		c1.display(i);
	}
	cout << endl;
	
	cout << "calling the brake function five times and show the speed" << endl;
	
	for(int i = 6; i <= 10; i++){
		c1.brake();
		c1.display(i);
	}
	return 0;
}
