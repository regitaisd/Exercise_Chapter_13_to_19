#ifndef RetailItem_h
#define RetailItem_h
#include <string>
using namespace std;

class RetailItem{
	private:
		string description;
		int unitsOnHand;
		double price;
	public:
		RetailItem();
		RetailItem2(string description, int unitsOnHand, double price);
		string getDesc();
		int getUnit();
		double getPrice();
};

#endif /*RetailItem_h*/
