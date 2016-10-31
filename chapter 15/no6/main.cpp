#include <iostream>
#include "essay.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int grammar, spelling, length, content, score;
	
	cout << "Enter student's grammar points: ";
	cin >> grammar;
	cout << "Enter student's spelling points: ";
	cin >> spelling;
	cout << "Enter student's correct length points: ";
	cin >> length;
	cout << "Enter student's content points: ";
	cin >> content;
	
	Essay e;
	e.setGrammar(grammar);
	e.setSpelling(spelling);
	e.setLength(length);
	e.setCont(content);
	e.setScore(score);
	
	cout << endl;
	
	cout << "Student's Grammar Points: " << e.getGrammar() << " out of a total of 30 points" << endl;
	cout << "Student's Spelling Points: " << e.getSpelling() << " out of a total of 20 points"<< endl;
	cout << "Student's Correct Length Points: " << e.getLength() << " out of a total of 20 points" << endl;
	cout << "Student's Content Points: " << e.getContent() << " out of a total of 30 points" << endl;
	score = e.getGrammar() + e.getSpelling() + e.getLength() + e.getContent();
	cout << "The student's total score is: " << score;
	
	return 0;
}
