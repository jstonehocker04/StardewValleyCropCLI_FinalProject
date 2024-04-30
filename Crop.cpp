#include <iostream>
#include <cmath>
#include <string>
#include "Crop.h"

// Default Constructor implementation
Crop::Crop(const std::string& crop_name, const std::string& season, const double& gdp, const int& pierre_price, const int& growth_time) :
	crop_name(crop_name), season(season), gdp(gdp), pierre_price(pierre_price), growth_time(growth_time) {}

// Getters and setters implementations
std::string Crop::getCrop_Name() const { return crop_name; }
std::string Crop::getSeason() const { return season;}
double Crop::getGDP() const { return gdp; }
int Crop::getPierre_Price() const { return pierre_price; }
int Crop::getGrowth_Time() const { return growth_time; }
//bool Crop::getRegrowth() const { return regrowth; }
//int Crop::getRegrwoth_Time() const { return regrowth_time; }
//int Crop::getNormal_Sell() const { return normal_sell; }
void Crop::getGeneralInfo() const {
	std::cout << "Crop Name:\t" + getCrop_Name() + '\n'
		+ "Season:\t" + getSeason() + '\n'
		+ "Gold Per Day:\t" + std::to_string(getGDP()) + '\n'
		+ "Pierre's Price:\t" + std::to_string(getPierre_Price()) + '\n'
		+ "Growth Time:\t" + std::to_string(getGrowth_Time()) + '\n';
}