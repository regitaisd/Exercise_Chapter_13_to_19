#ifndef employee_h
#define employee_h
#include <string>
using namespace std;

class Employee{
	private:
		string name;
		int ID;
		int dateHired;
	public:
		Employee();
		Employee(string name, int ID, int dateHired);
		void setName(string name);
		string getName();
		void setID(int ID);
		int getID();
		void setDate(int dateHired);
		int getDate();
};

class stateSupervisor:public Employee{
	protected:
		double salary;
		double bonus;
	public:
		stateSupervisor();
		stateSupervisor(string, int, int, double, double);
		void setSalary(double salary);
		double getSalary();
		void setBonus(double bonus);
		double getBonus();
};

#endif
