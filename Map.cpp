/**************************************************
 Map: create map for player
 
**************************************************/
#include "Map.h"
using std::string;
using namespace std;
Map::Map() {
	// this is where to the map 2D is made 
	string line01 = "----------------------------------------------------------\n";
	string line02 = "|              |              |   Kitchen   |            |\n";
	string line03 = "|   Basement   |              |             |            |\n";
	string line04 = "|              |    Main      |             |            |\n";
	string line05 = "|              |   Bedroom    |             |            |\n";
	string line06 = "|              |              |             |   Garden   |\n";
	string line07 = "----------------------------------------------------------\n";
	string line08 = "|              |              |   Rooftop   |            |\n";
	string line09 = "|              |              |             |            |\n";
	string line10 = "| Living Room  |              |             |            |\n";
	string line11 = "|              |              |             | Background |\n";
	string line12 = "|              |    Toilet    |             |            |\n";
	string line13 = "----------------------------------------------------------\n";
	string line14 = "|     Pool     |              |             |            |\n";
	string line15 = "|              |              |             |   Garage   |\n";
	string line16 = "|              |      BBQ     |             |            |\n";
	string line17 = "|              |    Station   |             |            |\n";
	string line18 = "|              |              |   Storage   |            |\n";
	string line19 = "----------------------------------------------------------\n";
	string line20 = "|              |              |   Toilet2   |            |\n";
	string line21 = "|              |              |             |   Toilet3  |\n";
	string line22 = "|    Guess     |              |             |            |\n";
	string line23 = "|   Bedroom1   |              |             |            |\n";
	string line24 = "|              |      Guess   |             |            |\n";
	string line25 = "|              |    Bedroom2  |             |            |\n";
	string line26 = "----------------------------------------------------------\n";


	//to pointing direction where the detective location.
	for (int i = 0; i < 58; i++)
	{
		mapIndex[0][i] = line01[i];
		mapIndex[1][i] = line02[i];
		mapIndex[2][i] = line03[i];
		mapIndex[3][i] = line04[i];
		mapIndex[4][i] = line05[i];
		mapIndex[5][i] = line06[i];
		mapIndex[6][i] = line07[i];
		mapIndex[7][i] = line08[i];
		mapIndex[8][i] = line09[i];
		mapIndex[9][i] = line10[i];
		mapIndex[10][i] = line11[i];
		mapIndex[11][i] = line12[i];
		mapIndex[12][i] = line13[i];
		mapIndex[13][i] = line14[i];
		mapIndex[14][i] = line15[i];
		mapIndex[15][i] = line16[i];
		mapIndex[16][i] = line17[i];
		mapIndex[17][i] = line18[i];
		mapIndex[18][i] = line19[i];
		mapIndex[19][i] = line20[i];
		mapIndex[20][i] = line21[i];
		mapIndex[21][i] = line22[i];
		mapIndex[22][i] = line23[i];
		mapIndex[23][i] = line24[i];
		mapIndex[24][i] = line25[i];
		mapIndex[25][i] = line26[i];
	}
}
void Map::clearLocation() {
	for (int i = 0; i < 27; i++)
	{
		for (int j = 0; j < 60; j++) {
			if (mapIndex[i][j] == '^_^')
			{
				mapIndex[i][j] == '  ';
			}
		}
	}
}
void Map::Basement() {
	clearLocation();
	mapIndex[3][7] = '^_^';
}
void Map::MainBedroom() {
	clearLocation();
	mapIndex[1][25] = '^_^';
}
void Map::Kitchen() {
	clearLocation();
	mapIndex[5][43] = '^_^';
}
void Map::Garden() {
	clearLocation();
	mapIndex[4][56] = '^_^';
}
void Map::LivingRoom() {
	clearLocation();
	mapIndex[9][7] = '^_^';
}
void Map::Toilet() {
	clearLocation();
}
void Map::RoofTop() {
	clearLocation();
	mapIndex[12][7] = '^_^';
}
void Map::Background() {
	clearLocation();
	mapIndex[11][55] = '^_^';
}
void Map::Pool() {
	clearLocation();
	mapIndex[14][42] = '^_^';
}
void Map::BBQstation() {
	clearLocation();
	mapIndex[17][25] = '^_^';
}
void Map::Storage() {
	clearLocation();
	mapIndex[16][37] = '^_^';
}
void Map::Garage() {
	clearLocation();
	mapIndex[19][54] = '^_^';
}
void Map::guessBedroom1() {
	clearLocation();
	mapIndex[21][10] = '^_^';
}
void Map::guessBedroom2() {
	clearLocation();
	mapIndex[22][25] = '^_^';
}
void Map::Toilet2() {
	clearLocation();
	mapIndex[25][43] = '^_^';
}
void Map::Toilet3() {
	clearLocation();
	mapIndex[26][52] = '^_^';
}

void Map::mapPrint() const {
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 57; j++) {
			cout << mapIndex[i][j];
		}
	}
}
void Map::currentLocation() const {
	cout << "\t\t\t You are here: ^_^" << endl;
}