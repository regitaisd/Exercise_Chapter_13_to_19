#include <iostream>
#include "essay.h"
using namespace std;

GradedActivity::GradedActivity(){
	grammar = 0;
	spelling = 0;
	length = 0;
	content = 0;
}

GradedActivity::GradedActivity(int grammar, int spelling, int length, int content){
	grammar = grammar;
	spelling = spelling;
	length = length;
	content = content;
}

void GradedActivity::setGrammar(int grammar){
	this -> grammar = grammar;
}

void GradedActivity::setSpelling(int spelling){
	this -> spelling = spelling;
}

void GradedActivity::setLength(int length){
	this -> length = length;
}

void GradedActivity::setCont(int content){
	this -> content = content;
}

int GradedActivity::getGrammar(){
	return grammar;
}

int GradedActivity::getSpelling(){
	return spelling;
}

int GradedActivity::getLength(){
	return length;
}

int GradedActivity::getContent(){
	return content;
}

Essay::Essay(){
	score = 0;
}

Essay::Essay(int grammar, int spelling, int length, int content, int score):GradedActivity(int grammar, int spelling, int length, int content){
	score = score;
}

void Essay::setScore(int score){
	this -> score = score;
}

int Essay::getScore(){
	return score;
}
