#ifndef numbers_h
#define numbers_h
#include <string>
using namespace std;

class Numbers{
	private:
		int n;
		string lessThan20[20] = {"Zero", "One", "Two", "Three", "Four", "Five",
								"Six", "Seven", "Eight", "Nine", "Ten", "Eleven",
								"Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
								"Seventeen", "Eighteen", "Nineteen"};
		string lessThan100[8] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
		string hundreds = "hundred";
		string thousands = "thousand";
		int ten[8] = {20, 30, 40, 50, 60, 70, 80, 90};
		int hund[9] = {100, 200, 300, 400, 500, 600, 700, 800, 900};
		int thou[10] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
		
	public:
		Numbers();
		int getNo();
		int setNo(int no);
		void Thousand(int n);
		void Hundred(int n);
		void Tens(int n);
		void Ones(int n);
		
};

#endif /*numbers_h*/
