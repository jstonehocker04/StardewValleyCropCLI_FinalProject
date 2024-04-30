#include <cmath>
#include "Crop.h"

using std::string, std::to_string, std::floor;

// Constructor implementation
Crop::Crop(const string& crop_name, const string& season, const int& pierre_price, const int& growth_time, const bool& regrowth, const int& regrowth_time, const int& normal_sell) :
	crop_name(crop_name), season(season), pierre_price(pierre_price), growth_time(growth_time), regrowth(regrowth), regrowth_time(regrowth_time), normal_sell(normal_sell) {}

// Getters and setters implementations
string Crop::getCrop_Name() const { return crop_name; }
string Crop::getSeason() const { return season;}
int Crop::getPierre_Price() const { return pierre_price; }
int Crop::getGrowth_Time() const { return growth_time; }
bool Crop::getRegrowth() const { return regrowth; }
int Crop::getRegrwoth_Time() const { return regrowth_time; }
int Crop::getNormal_Sell() const { return normal_sell; }
int
string Crop::getGeneralInfo() const {
	string msg = "Crop Name:\t" + crop_name + '\n'
		+ "Season:\t" + season + '\n'
		+ "Gold Per Day:\t" + /*Crop::getGDP() will fill in*/ '\n'
		+ "Pierre's Price:\t" + to_string(pierre_price) + '\n'
		+ "Growth Time:\t" + to_string(growth_time) + '\n'
		+ "Regrowth:\t" + to_string(regrowth) + '\n'
		+ "Regrowth Time:\t" + to_string(regrowth_time) + '\n'
		+ "Normal Sell Price:\t" + to_string(normal_sell) + '\n';
}