#pragma once
#ifndef DETECTIVE_H
#define DETECTIVE_H
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <stdlib.h>
#include <vector>
#include "Item.h"
#include "Map.h"
using namespace std;
string deName;
class Detective {
private:
	string nameInput;
public:
	void searchLocation();
	void goLocation();
	void useItem();
	void dropItem();
	void getItem();
	void examineItem();
	void questionSuspect();
	void accuseSuspect();
};
#endif