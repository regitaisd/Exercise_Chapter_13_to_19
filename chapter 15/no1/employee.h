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

class productionWorker:public Employee{
	protected:
		int shift;
		double hourlyPay;
	public:
		productionWorker();
		productionWorker(string, int, int, int, double);
		int getShift();
		double getPay();
		
};

#endif
