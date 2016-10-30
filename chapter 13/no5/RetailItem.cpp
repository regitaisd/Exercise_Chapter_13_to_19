#include "RetailItem.h"
#include <iostream>
#include <string>
using namespace std;

RetailItem::RetailItem(){
	this -> description = " ";
	this -> unitsOnHand = 0;
	this -> price = 0;
}

RetailItem::RetailItem2(string description, int unitsOnHand, double price){
	this -> description = description;
	this -> unitsOnHand = unitsOnHand;
	this -> price = price;
}

string RetailItem::getDesc(){
	return this -> description;
}

int RetailItem::getUnit(){
	return this -> unitsOnHand;
}

double RetailItem::getPrice(){
	return this -> price;
}
