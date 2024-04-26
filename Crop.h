#pragma once
#include <string>
#include <vector>

class Crop
{
private:
	std::string crop_name;
	std::string season;
	int pierre_price;
	int growth_time;
	bool regrowth;
	int regrowth_time;
	int normal_sell;
	
public:
	//Constructor
	Crop(const std::string crop_name, const std::string season, const int pierre_price, const int growth_time, const bool regrowth, const int regrowth_time, const int normal_sell);

	// Getter functions
	//std::string getCrop_Name() const;
	//std::string getSeason() const;
	//int getPierre_Price() const;
	//int getGrowth_Time() const;
	//bool getRegrowth() const;
	//int getRegrwoth_Time() const;
	//int getNormal_Sell() const;
	//void getVehicleInfo() const;
};

