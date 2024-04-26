#include "Crop.h"
#include <iostream>
#include <fstream>
#include <sstream>

// Constructor implementation
Crop::Crop(const std::string& crop_name, const std::string& season, const int& pierre_price, const int& growth_time, const bool& regrowth, const int& regrowth_time, const int& normal_sell) :
	crop_name(crop_name), season(season), pierre_price(pierre_price), growth_time(growth_time), regrowth(regrowth), regrowth_time(regrowth_time), normal_sell(normal_sell) {}

// Function to move data from CVS to vector
static std::vector<Crop> readCSV(const std::string& filename) {
	std::vector<Crop> cropList;
	std::ifstream file(filename);
	std::string line;

	while (std::getline(file, line)) {
		std::istringstream iss(line);
		std::string crop_name;
		std::string season;
		int pierre_price;
		int growth_time;
		bool regrowth;
		int regrowth_time;
		int normal_sell;
		// Read data from each line
		if (std::getline(iss, crop_name, ',') && iss >> season && iss >> pierre_price && iss >> growth_time && iss >> regrowth && iss >> regrowth_time && iss >> normal_sell) {
			cropList.push_back({ crop_name, season, pierre_price, growth_time, regrowth, regrowth_time, normal_sell });
		}
	}

	return cropList;
}

// Getters and setters implementations
