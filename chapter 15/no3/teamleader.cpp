#include "teamleader.h"
#include <iostream>
using namespace std;

productionWorker::productionWorker(){
	hr = 0;
	hourlyPay = 0;
}

productionWorker::productionWorker(int hr, double pay){
	hr = hr;
	hourlyPay = pay;
}

void productionWorker::setHr(int hr){
	this -> hr = hr;
}

void productionWorker::setPay(double pay){
	this -> hourlyPay = pay;
}

int productionWorker::getHr(){
	return hr;
}

double productionWorker::getPay(){
	return hourlyPay;
}

teamLeader::teamLeader(){
	bonus = 0;
	minTraining = 0;
	training = 0;
}

teamLeader::teamLeader(int hr, double hourlyPay, double bonus, int minTraining, int training):productionWorker(hr, hourlyPay){
	bonus = bonus;
	minTraining = minTraining;
	training = training;
}

void teamLeader::setBonus(double bonus){
	this -> bonus = bonus;
}

void teamLeader::setTraining(int training){
	this -> training = training;
}

void teamLeader::setMin(int minTraining){
	this -> minTraining = minTraining;
}

double teamLeader::getBonus(){
	return bonus;
}

int teamLeader::getMin(){
	return minTraining;
}

int teamLeader::getTraining(){
	return training;
}
