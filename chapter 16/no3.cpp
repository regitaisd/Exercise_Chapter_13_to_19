#include <iostream>
#include <string>
using namespace std;

template <class T>
T minmax (T num1, T num2, T stat)
{
	if(num1 < num2){
		if(stat == "min"){
			cout << num1;
		}
		if (stat == "max"){
			cout << num2;
		}
	}
	if(num2 < num1){
		if (stat == "min"){
			cout << num2;
		}
		if (stat == "max"){
			cout << num1;
		}
	}
}

int main(){
	int num1, num2;
	
	cout <<"This program lets you enter two digits and it will show the minimum and maximum of the value" << endl;
	cout << "enter two values: ";
	cin >> num1 >> num2;
	cout << "the minimum of the value is: ";
	minmax(num1, num2, "min");
	cout << "the maximum of the value is: ";
	minmax(num1, num2, "max");
	
	return 0;
}
