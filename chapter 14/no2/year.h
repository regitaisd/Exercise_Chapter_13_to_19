#ifndef year_h
#define year_h
#include <string>
using namespace std;

class Day{
	private:
		int day;
		string month[12] = {"January", "February", "March", "April", "May", "June",
						   "July", "August", "September", "October", "November",
						   "December"};
		int endDate[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
	public:
		Day(int day);
		int setDay(int date);
		int getDay();
		void displayDay();
};

#endif
