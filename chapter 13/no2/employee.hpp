#ifndef employee_hpp
#define employee_hpp

#include <string>
using namespace std;

class Employee{
	string name;
	int idNumber;
	string department;
	string position;
	
	public:
		Employee(string name, int idNumber, string department, string position);
		Employee(string name, int idNumber);
		Employee();
		void printEmployee();
};

#endif /*employee_hpp*/
