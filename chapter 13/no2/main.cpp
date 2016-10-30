#include <iostream>
#include "employee.hpp"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");
	Employee employee2("Mark Jones", 39119, "IT", "Progammer");
	Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");
	
	employee1.printEmployee();
	employee2.printEmployee();
	employee3.printEmployee();
	
	return 0;
}
