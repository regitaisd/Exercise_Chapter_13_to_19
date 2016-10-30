#include <iostream>
#include <string>
#include "info.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	for(int i = 1; i <= 3; i++){
		Info in;
		cout << "Enter name: ";
		in.getName();
		cout << "Enter address: ";
		in.getAddress();
		cout << "Enter age: ";
		in.getAge();
		cout << "Enter phone number: ";
		in.getPhone();
		cout << endl;
	}
	return 0;
}
