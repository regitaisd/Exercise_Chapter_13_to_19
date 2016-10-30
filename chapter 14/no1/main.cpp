#include <iostream>
#include <string>
#include "numbers.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int no;
	Numbers entry;
	
	cout << "enter a number (1-9999): ";
	cin >> no;
	
	entry.setNo(no);
	
	if(no > 999 && no < 10000){
		entry.Thousand(entry.getNo());
	}
	
	if(no > 99 && no < 1000){
		entry.Hundred(entry.getNo());
	}
	
	if(no > 19 && no < 100){
		entry.Tens(entry.getNo());
	}
	
	if(no < 20){
		entry.Ones(entry.getNo());	
	}
	
	
	return 0;
}
