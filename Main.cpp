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
#include <fstream>
#include <sstream>
#include "Crop.h"


//	Declared Funcitons
std::vector<Crop> readtestCSV(const std::string&);
void printTitle();



int main() {
	std::vector<Crop> cropList = readtestCSV("TestCropInfo.csv");
	
	printTitle();

	
	// Initialize variable to store Command Line Input and then store input into it to check
	for (const auto& crop : cropList) {
		crop.getGeneralInfo();
	}

	return 0;
}	// main()



// Defining Declared Functions
std::vector<Crop> readCSV(const std::string& filename) {
	std::vector<Crop> cropList;
	std::ifstream file(filename);
	std::string line;

	while (getline(file, line)) {
		std::istringstream iss(line);
		std::string crop_name;
		std::string season;
		double gdp;
		int pierre_price;
		int growth_time;
		// Read data from each line
		if (getline(iss, crop_name, ',') && iss >> season, iss >> gdp, iss >> pierre_price, iss >> growth_time) {
			cropList.push_back({ crop_name, season, gdp, pierre_price, growth_time });
		}
	}
	//// Prints to confirm action is done
	//std::cout << "CSV converted to vector\n";

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