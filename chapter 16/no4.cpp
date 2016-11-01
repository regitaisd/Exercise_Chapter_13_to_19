#include <iostream>
using namespace std;

template <class T>
T absoluteValue(T num){
	return (num > 0 ? num : num * -1);
}

int main(){
	int num1, num2;
	
	
	cout << "Enter an integer: ";
	cin >> num1;
	cout << "now enter another integer: ";
	cin >> num2;
	cout << endl;
	cout << "The absolute value of " << num1 << " is: " << absoluteValue(num1) << endl;
	cout << "The absolute value of " << num2 << " is: " << absoluteValue(num2) << endl;
	
	return 0;
}
