#ifndef date_hpp
#define date_hpp

#include <string>
using namespace std;

class Date{
		int month = 1;
		int day = 1;
		int year = 1970;
		
	    const string monthName[12] = {"January", "February", "March", "April",
		                   "May", "June", "July", "August",
						   "September", "October", "November", "December"};
		
		public:
			Date(int day, int month, int year){
				this -> day = day;
				this -> month = month;
				this -> year = year;
			};
			void printFirstForm();
		    void printSecondForm();
		    void printThirdForm();
};

#endif /*date_hpp*/
