#include "numbers.h"
#include <iostream>
#include <string>
using namespace std;

Numbers::Numbers(){
	this -> n = n;
}


int Numbers::setNo(int no){
	this -> n = no;
} 

int Numbers::getNo(){
	return n;
}


void Numbers::Thousand(int n){
	for (int i = 0; i < 10; i++){
		if(n - thou[i] < 1000 && n - thou[i] > 0){
			cout << lessThan20[i+1] << thousands << " ";
			n = n - thou[i];
		}
	}
}

void Numbers::Hundred(int n){
	for(int i = 0; i < 9; i++){
		if(n - hund[i] < 100 && n - hund[i] > 0){
			cout << lessThan20[i+1] << hundreds << " ";
			n = n - hund[i];
		}
	}
}

void Numbers::Tens(int n){
	for(int i = 0; i < 8; i++){
		if(n - ten[i] < 10 && n - ten[i] > 0){
			cout << lessThan100[i+1] << " ";
			n = n - ten[i];
		}
	}
}

void Numbers::Ones(int n){
	if(n > 0){
		cout << lessThan20[n];
	}
}
