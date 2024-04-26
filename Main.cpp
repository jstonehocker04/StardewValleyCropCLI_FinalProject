/*----------------------------------------------------
 * Program Title:	Stardew Valley Crop Information
 * Author:          Josiah Stonehocker
 * Date:			4/24/2024
 * Description:
 * Usage / Issues:
 *-----------------------------------------------------
 */

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "Crop.h"

//	Declared Funcitons
std::vector<Crop> readCSV(const std::string&);
void printTitle();

int main() {
	// Store Data from CSV into vector
	std::vector<Crop> cropList = readCSV("TestCropInfo.csv");
	
	printTitle();
}

// Definig Declared Functions
std::vector<Crop> readCSV(const std::string& filename) {
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
		if (std::getline(iss, crop_name, ',') && iss >> season, iss >> pierre_price, iss >> growth_time, iss >> regrowth, iss >> regrowth_time, iss >> normal_sell) {
			cropList.push_back({ crop_name, season, pierre_price, growth_time, regrowth, regrowth_time, normal_sell });
		}
	}
	// Prints to confirm action is done
	std::cout << "CSV converted to vector\n";

	return cropList;
}


void printTitle() {
	std::ifstream file("Title.txt");
	if (file) {
		std::string line;
		while (getline(file, line))
			std::cout << line << '\n';
	}
	std::cout << "\n\n";
}