#pragma once
#include <string>

using std::string;

class Crop
{
private:
	string crop_name;
	string season;
	int pierre_price;
	int growth_time;
	bool regrowth;
	int regrowth_time;
	int normal_sell;
	
public:
	// Default Constructor
	Crop(const string& crop_name, const string& season, const int& pierre_price, const int& growth_time, const bool& regrowth, const int& regrowth_time, const int& normal_sell);

	// Getter functions
	string getCrop_Name() const;
	string getSeason() const;
	int getPierre_Price() const;
	int getGrowth_Time() const;
	bool getRegrowth() const;
	int getRegrwoth_Time() const;
	int getNormal_Sell() const;
	int getGDP(string crop_name, int sell_price, int seed_price, int growing_days);
	string getGeneralInfo() const;
};

