#include "Crop.h"
#include <iostream>

// Constructor implementation
Crop::Crop(const std::string& crop_name, const std::string& season, const int& piere_price, const int& growth_time, const bool& regrowth, const int& regrowth_time, const int& normal_sell) :
	crop_name(crop_name), season(season), piere_price(piere_price), growth_time(growth_time), regrowth(regrowth), regrowth_time(regrowth_time), normal_sell(normal_sell) {}


// Getters and setters implementations
std::string Crop::getGeneralInfo() {
	std::string msg = "";


	return msg;
}