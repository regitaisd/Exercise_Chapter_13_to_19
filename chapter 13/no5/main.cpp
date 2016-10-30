#include <iostream>
#include <string>
#include "RetailItem.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	RetailItem i1;
	RetailItem i2;
	RetailItem i3;
	
	i1.RetailItem2("Jacket", 12, 59.95);
	i2.RetailItem2("Designer Jeans", 40, 34.95);
	i3.RetailItem2("Shirt", 20, 24.95);
	
	cout << "Description \tUnits On Hand \tPrice" << endl;
	cout << "-------------------------------------" << endl;
	cout << i1.getDesc() << "\t\t" << i1.getUnit() << "\t\t" << i1.getPrice() << endl;
	cout << i2.getDesc() << "\t" << i2.getUnit() << "\t\t" << i2.getPrice() << endl;
	cout << i3.getDesc() << "\t\t" << i3.getUnit() << "\t\t" << i3.getPrice();
	return 0;
}
