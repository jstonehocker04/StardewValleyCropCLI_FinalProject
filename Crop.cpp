#include "Crop.h"

// Constructor implementation
Crop::Crop(const std::string& crop_name, const std::string& season, const int& pierre_price, const int& growth_time, const bool& regrowth, const int& regrowth_time, const int& normal_sell) :
	crop_name(crop_name), season(season), pierre_price(pierre_price), growth_time(growth_time), regrowth(regrowth), regrowth_time(regrowth_time), normal_sell(normal_sell) {};

// Getters and setters implementations
std::string getCrop_name() {
	return crop_name;
}
std::string getSeason() {
	return season;
}
int getPierre_price() {
	return pierre_price;
}
int getGrowth_time() {
	return growth_time;
}
bool getRegrowth() {
	return regrowth;
}
int getRegrowth_time() {
	return regrowth_time;
}
int getNormal_sell() {
	return normal_sell;
}