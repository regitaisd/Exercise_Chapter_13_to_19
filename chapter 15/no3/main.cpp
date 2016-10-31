#include <iostream>
#include "teamleader.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int hours;
	int minimum;
	double hourpay;
	double bonus;
	
	cout << "Enter team leader's hourly pay rate: ";
	cin >> hourpay;
	cout << "Enter the bonus that the team leader will get: ";
	cin >> bonus;
	cout << "Enter the minimum training hours that the team leader should work: ";
	cin >> minimum;
	cout << "Enter the amount of hours that the team leader worked: ";
	cin >> hours;
	cout << endl;
	
	teamLeader h;
	h.setHr(hours);
	h.setMin(minimum);
	h.setPay(hourpay);
	h.setBonus(bonus);
	
	if(hours > minimum){
		int extraH;
		extraH = h.getHr() - h.getMin();
		cout << "The team leader has worked for " << h.getHr() << " hours" << endl;
		cout << "The team leader has worked for " << extraH << " extra hours" << endl;
		cout << "The bonus amount they get is: $" << h.getBonus() << endl;
		cout << "Therefore the total payment is: $" << h.getBonus() + h.getPay() << endl;
	} else {
		cout << "The team leader has worked for " << h.getHr() << " hours" << endl;
		cout << "However because they didn't work until the minimum hours to get the bonus" << endl;
		cout << "They don't get any bonus" << endl;
		cout << "The bonus amount they get is: $" << 0 << endl;
		cout << "Therefore the total payment is: $" << h.getPay() << endl;
	}
	return 0;
}
