#include <iostream>
#include "date.hpp"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Date newDate(25, 12, 2014);
	
	newDate.printFirstForm();
	newDate.printSecondForm();
	newDate.printThirdForm();
	
	return 0;
}
