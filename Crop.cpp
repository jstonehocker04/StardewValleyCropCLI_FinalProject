#include <iostream>
#include <iomanip>
#include "Crop.h"

using std::to_string;

// Default Constructor implementation
Crop::Crop(const string& crop_name, const string& season, const double& gdp, const int& pierre_price, const int& growth_time) :
	crop_name(crop_name), season(season), gdp(gdp), pierre_price(pierre_price), growth_time(growth_time) {}

// Full Constructor implementation
Crop::Crop(const string& crop_name, const string& season, const double& gdp, const int& pierre_price, const int& joja_price, const int& growth_time, const int& regrowth_time,
	const int& normal_sell, const int& silver_sell, const int& gold_sell, const int& iridium_sell,
	const int& normal_energy, const int& silver_energy, const int& gold_energy, const int& iridium_energy,
	const int& normal_health, const int& silver_health, const int& gold_health, const int& iridium_health,
	const string used_in, const string loved_gift) :
	crop_name(crop_name), season(season), gdp(gdp), pierre_price(pierre_price), joja_price(joja_price), growth_time(growth_time), regrowth_time(regrowth_time),
	normal_sell(normal_sell), silver_sell(silver_sell), gold_sell(gold_sell), iridium_sell(iridium_sell),
	normal_energy(normal_energy), silver_energy(silver_energy), gold_energy(gold_energy), iridium_energy(iridium_energy),
	normal_health(normal_health), silver_health(silver_health), gold_health(gold_health), iridium_health(iridium_health),
	used_in(used_in), loved_gift(loved_gift) {}


// Getters and setters implementations
string Crop::getCrop_Name() const { return crop_name; }
string Crop::getSeason() const { return season; }
double Crop::getGDP() const { return gdp; }
int Crop::getPierre_Price() const { return pierre_price; }
int Crop::getJoja_Price() const { return joja_price; }
int Crop::getGrowth_Time() const { return growth_time; }
bool Crop::getRegrowth() const { return regrowth_time >= 0 ? false : true; }
int Crop::getRegrwoth_Time() const { return regrowth_time; }
int Crop::getNormal_Sell() const { return normal_sell; }
int Crop::getSilver_Sell() const { return silver_sell; }
int Crop::getGold_Sell() const { return gold_sell; }
int Crop::getIridium_Sell() const { return iridium_sell; }
bool Crop::getEdible() const {
	if (normal_energy == 0 && silver_energy == 0 && gold_energy == 0 && iridium_energy == 0 && normal_health == 0 && silver_health == 0 && gold_health == 0 && iridium_health == 0)
		return true;
	else
		return false;
}
int Crop::getNormal_Energy() const { return normal_energy; }
int Crop::getSilver_Energy() const { return silver_energy; }
int Crop::getGold_Energy() const { return gold_energy; }
int Crop::getIridium_Energy() const { return iridium_energy; }
int Crop::getNormal_Health() const { return normal_health; }
int Crop::getSilver_Health() const { return silver_health; }
int Crop::getGold_Health() const { return gold_health; }
int Crop::getIridium_Health() const { return iridium_health; }
string Crop::getUsed_In() const { return used_in; }
string Crop::getLoved_Gift() const { return loved_gift; }
string Crop::getGeneralInfo() const {
	string msg = "Season:\t" + getSeason() + '\n'
		+ "Gold Per Day:\t" + to_string(getGDP()) + '\n'
		+ "Pierre's Price:\t" + to_string(getPierre_Price()) + '\n'
		+ "Growth Time:\t" + to_string(getGrowth_Time()) + '\n'
		+ "Normal Sell Price:\t" + to_string(getNormal_Sell()) + '\n';

	return msg;
}
string Crop::getAllInfo() const {
	string msg = "Season:\t\t\t" + getSeason() + '\n'
		+ "Gold Per Day:\t\t" + to_string(getGDP()) + '\n'
		+ "Pierre's Price:\t" + to_string(getPierre_Price()) + '\n'
		+ "Joja's Price:\t" + to_string(getJoja_Price()) + '\n'
		+ "Growth Time:\t" + to_string(getGrowth_Time()) + '\n'
		+ "Regrowth:\t" + to_string(getRegrowth()) + '\n'
		+ "Regrowth Time:\t" + to_string(getRegrwoth_Time()) + '\n'
		+ "Normal Sell Price:\t" + to_string(getNormal_Sell()) + '\n'
		+ "Silver Sell Price:\t" + to_string(getSilver_Sell()) + '\n'
		+ "Gold Sell Price:\t" + to_string(getGold_Sell()) + '\n'
		+ "Iridium Sell Price:\t" + to_string(getIridium_Sell()) + '\n'
		+ "Edible:\t" + to_string(getEdible()) + '\n'
		+ "Normal Energy:\t" + to_string(getNormal_Energy()) + '\n'
		+ "Silver Energy:\t" + to_string(getSilver_Energy()) + '\n'
		+ "Gold Energy:\t" + to_string(getGold_Energy()) + '\n'
		+ "Iridium Energy:\t" + to_string(getIridium_Energy()) + '\n'
		+ "Normal Health:\t" + to_string(getNormal_Health()) + '\n'
		+ "Silver Health:\t" + to_string(getSilver_Energy()) + '\n'
		+ "Gold Health:\t" + to_string(getGold_Health()) + '\n'
		+ "Iridium Health:\t" + to_string(getIridium_Health()) + '\n'
		+ "Used In:\t" + getUsed_In() + '\n'
		+ "Loved Gift:\t" + getLoved_Gift() + '\n';

	return msg;
}