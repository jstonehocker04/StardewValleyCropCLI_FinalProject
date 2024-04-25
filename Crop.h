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
	Crop(const std::string& crop_name, const std::string& season, const int& piere_price, const int& growth_time, const bool& regrowth, const int& regrowth_time, const int& normal_sell);

	// Function to move data from csv into objects then into a vector


	// Getter functions
	std::string getGeneralInfo() const;
};

