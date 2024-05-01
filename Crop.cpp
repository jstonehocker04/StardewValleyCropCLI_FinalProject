#include <iostream>
#include <cmath>
#include <string>
#include "Crop.h"

// Default Constructor implementation
Crop::Crop(const std::string& crop_name, const std::string& season, const double& gdp, const int& pierre_price, const int& growth_time) :
	crop_name(crop_name), season(season), gdp(gdp), pierre_price(pierre_price), growth_time(growth_time) {}

// Full Constructor implementation
Crop::Crop(const std::string& crop_name, const std::string& season, const double& gdp, const int& pierre_price, const int& joja_price, const int& growth_time, const int& regrowth_time,
	const int& normal_sell, const int& silver_sell, const int& gold_sell, const int& iridium_sell,
	const int& normal_energy, const int& silver_energy, const int& gold_energy, const int& iridium_energy,
	const int& normal_health, const int& silver_health, const int& gold_health, const int& iridium_health,
	const std::string used_in, const std::string loved_gift) :
	crop_name(crop_name), season(season), gdp(gdp), pierre_price(pierre_price), joja_price(joja_price), growth_time(growth_time),
	normal_sell(normal_sell), silver_sell(silver_sell), gold_sell(gold_sell), iridium_sell(iridium_sell),
	normal_energy(normal_energy), silver_energy(silver_energy), gold_energy(gold_energy), iridium_energy(iridium_energy),
	normal_health(normal_health), silver_health(silver_health), gold_health(gold_health), iridium_health(iridium_health),
	used_in(used_in), loved_gift(loved_gift) {}


// Getters and setters implementations
std::string Crop::getCrop_Name() const { return crop_name; }
std::string Crop::getSeason() const { return season; }
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