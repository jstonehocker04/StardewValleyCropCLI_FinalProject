#pragma once
#include <string>

class Crop
{
private:
	std::string crop_name;
	std::string season;
	double gdp;
	int pierre_price;
	int growth_time;
	//int regrowth_time;
	//int normal_sell;
	//int silver_sell;
	//int gold_sell;
	//int iridium_sell;
	//int normal_energy;
	//int silver_energy;
	//int gold_energy;
	//int iridium_energy;
	//int normal_health;
	//int silver_health;
	//int gold_health;
	//int iridium_health;
	//std::string used_in;
	//std::string loved_gift;
	
public:
	// Empty Constructor
	Crop();
	// Default Constructor
	Crop(const std::string& crop_name, const std::string& season, const double& gdp, const int& pierre_price, const int& growth_time);
	//// Full Constructor
	//Crop(const std::string& crop_name, const std::string& season, const double& gdp, const int& pierre_price, const int& joja_price, const int& growth_time, 
	//	const int& normal_sell, const int& silver_sell, const int& gold_sell, const int& iridium_sell, 
	//	const int& normal_energy, const int& silver_energy, const int& gold_energy, const int& iridium_energy,
	//	const int& normal_health, const int& silver_health, const int& gold_health, const int& iridium_health,
	//	const std::string used_in, const std::string loved_gift);

	// Getter functions
	std::string getCrop_Name() const;
	std::string getSeason() const;
	double getGDP() const;
	int getPierre_Price() const;
	int getGrowth_Time() const;
	//bool getRegrowth() const;
	//int getRegrwoth_Time() const;
	//int getNormal_Sell() const;
	void getGeneralInfo() const;
};

