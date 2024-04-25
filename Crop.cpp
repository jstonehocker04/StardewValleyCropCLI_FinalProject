#include "Crop.h"
#include <iostream>

// Constructor implementation
Crop::Crop(std::string crop_name, std::string season, int piere_price, int growth_time, bool regrowth, int regrowth_time, int normal_sell) :
	crop_name(crop_name), season(season), piere_price(piere_price), growth_time(growth_time), regrowth(regrowth), regrowth_time(regrowth_time), normal_sell(normal_sell) {}


// Getters and setters implementations
std::string Crop::getGeneralInfo(std::string crop_name) {
	
}