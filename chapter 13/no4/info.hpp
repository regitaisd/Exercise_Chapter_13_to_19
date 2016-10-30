#ifndef info_hpp
#define info_hpp

#include <string>
using namespace std;

class Info{
	private:
		string name;
		string address;
		int age;
		int phone;
	public:
		Data();
		Data(string name, string address, int age, int phone);
		string getName();
		string getAddress();
		int getAge();
		int getPhone();
};

#endif /*info_hpp*/
