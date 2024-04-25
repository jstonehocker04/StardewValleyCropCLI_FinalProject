#pragma once
#include <string>

class Crop
{
private:
	std::string crop_name;
	std::string season;
	int piere_price;
	int growth_time;
	bool regrowth;
	int regrowth_time;
	int normal_sell;

public:
	//Constructor
	Crop(std::string crop_name, std::string season, int piere_price, int growth_time, bool regrowth, int regrowth_time, int normal_sell);

	// Getter functions
	std::string getGeneralInfo(std::string crop_name) const;
};

