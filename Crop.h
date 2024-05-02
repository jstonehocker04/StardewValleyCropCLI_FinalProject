#pragma once
#include <string>

using std::string;

class Crop
{
private:
	string crop_name;
	string season;
	double gdp;
	int pierre_price;
	int joja_price;
	int growth_time;
	int regrowth_time;
	int normal_sell;
	int silver_sell;
	int gold_sell;
	int iridium_sell;
	int normal_energy;
	int silver_energy;
	int gold_energy;
	int iridium_energy;
	int normal_health;
	int silver_health;
	int gold_health;
	int iridium_health;
	string used_in;
	string loved_gift;
	
public:
	// Empty Constructor
	Crop();
	// Default Constructor
	Crop(const string& crop_name, const string& season, const double& gdp, const int& pierre_price, const int& growth_time);
	// Full Constructor
	Crop(const string& crop_name, const string& season, const double& gdp, const int& pierre_price, const int& joja_price, const int& growth_time, const int& regrowth_time,
		const int& normal_sell, const int& silver_sell, const int& gold_sell, const int& iridium_sell, 
		const int& normal_energy, const int& silver_energy, const int& gold_energy, const int& iridium_energy,
		const int& normal_health, const int& silver_health, const int& gold_health, const int& iridium_health,
		const string used_in, const string loved_gift);

	//Getter functions
	string getCrop_Name() const;
	string getSeason() const;
	double getGDP() const;
	int getPierre_Price() const;
	int getJoja_Price() const;
	int getGrowth_Time() const;
	bool getRegrowth() const;
	int getRegrwoth_Time() const;
	int getNormal_Sell() const;
	int getSilver_Sell() const;
	int getGold_Sell() const;
	int getIridium_Sell() const;
	bool getEdible() const;
	int getNormal_Energy() const;
	int getSilver_Energy() const;
	int getGold_Energy() const;
	int getIridium_Energy() const;
	int getNormal_Health() const;
	int getSilver_Health() const;
	int getGold_Health() const;
	int getIridium_Health() const;
	string getUsed_In() const;
	string getLoved_Gift() const;
	string getGeneralInfo() const;
	string getAllInfo() const;
};

