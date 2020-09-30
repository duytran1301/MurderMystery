/**************************************************
 Project: Murder Mystery
 Author: Nhat Duy Tran
 ID: 30068193
 Program : map(class)
**************************************************/
#pragma once
#ifndef MAP_H
#define MAP_H
#include <string>
#include <iostream>

class Map {
private:
	void clearLocation();
	char mapIndex[28][58]; //pointing to the map location
public:
	Map();
	//create location in which for player to enter
	void Basement();
	void MainBedroom();
	void Kitchen();
	void Garden();
	void LivingRoom();
	void Toilet();
	void RoofTop();
	void Background();
	void Pool();
	void BBQstation();
	void Storage();
	void Garage();
	void guessBedroom1();
	void guessBedroom2();
	void Toilet2();
	void Toilet3();
	
	void mapPrint() const; //the map board
	void currentLocation() const; //positioning where do the player go
};
#endif // !MAP_H